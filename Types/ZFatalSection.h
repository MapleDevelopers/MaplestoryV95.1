#pragma once
#include "ZAPI.h"

class ZFatalSectionData 
{
public:
    // Thread Information Block
    _TEB* _m_pTIB; 
    // Reference count
    int _m_nRef; 
};

class ZFatalSection : public ZFatalSectionData
{
public:
    // Locks the ZFatalSection object
    void Lock() 
    {
        if (ZFatalSection::_s_pfnTry(this) && ZFatalSection::_s_pfnTry(this))
        {
            // Convert to sleep function??
            void (__stdcall *v2)(_DWORD) = *(void (__stdcall **)(_DWORD))Sleep;
            do
                v2(0);
            while (ZFatalSection::_s_pfnTry(this));
        }
    }

    // TryM method of ZFatalSection class
    struct _TEB* __fastcall ZFatalSection::_TryM(void* pFatalCount)
    {
      struct _TEB* currentTeb = NtCurrentTeb();
      // compiler intrinsic _InterlockedCompareExchange
      struct _TEB* previousTeb = (struct _TEB*)_InterlockedCompareExchange((volatile signed __int32*)pFatalCount, (signed __int32)currentTeb, 0);
  
      if (previousTeb)
      {
        if (previousTeb == currentTeb)
        {
          ++*((_DWORD*)pFatalCount + 1);
          previousTeb = 0;
        }
      }
      else
      {
        *((_DWORD*)pFatalCount + 1) = 1;
      }

      return previousTeb;
    }

    // TryS method of ZFatalSection class
    void* __fastcall ZFatalSection::_TryS(void* pFatalCount)
    {
      void* result = 0;
      struct _TEB* currentTeb = NtCurrentTeb();

       /*
        * No clue what this is, so ill just take what other people wrote about it:
        * 
        * Likely related to extern "C" long _InterlockedCompareExchange(long volatile * _Destination, long _Exchange, long _Comparand);
        * 
        * cmpxchg src, dest - compares  dest with accumulator and if equal, src is copied into destination.
        * If not equal, destination is copied to the accumlator.
        * 
        * Atomic compare and exchange.  Compare OLD with MEM, if identical,
        * store NEW in MEM.  Return the initial value in MEM.  Success is
        * indicated by comparing RETURN with OLD.
        * 
        * #define __raw_cmpxchg(ptr, old, new, size, lock)	
        * #define __cmpxchg(ptr, old, new, size)\__raw_cmpxchg((ptr), (old), (new), (size), LOCK_PREFIX)
        */
      __asm
      { 
        cmpxchg [pFatalCount], edx 
      }

      *((_DWORD*)pFatalCount + 1) = 1;

      return result;
    }

    // TryI method of ZFatalSection class
    void* ZFatalSection::_TryI(void* lock)
    {
      _SYSTEM_INFO systemInfo;
      ZAPI.GetSystemInfo(&systemInfo);

      // Default is multiprocessor method
      void* (__fastcall *tryMethod)(void*) = ZFatalSection::_TryM;

      // Single processor swap to TryS method
      if (systemInfo.dwNumberOfProcessors <= 1)
      {
        tryMethod = ZFatalSection::_TryS;
      }

      ZFatalSection::_s_pfnTry = tryMethod;
      return tryMethod(lock);
    }

    // Helper function for initializing a ZFatalSection object
    static ZFatalSection* ZFatalSection::construct(ZFatalSection* p) 
    {
        ZFatalSection* result = p;

        if (!p)
        {
            return 0;
        }

        p->_m_pTIB = 0;
        return result;
    }

private:
    // Pointer to a unresolved try function
    static void* (__fastcall *_s_pfnTry)(void*); 
};