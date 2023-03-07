#pragma once
#include <winnt.h>

template<typename ZFatalSection>
class ZSynchronizedHelper
{
public:
    ZSynchronizedHelper(ZFatalSection* pLock) : m_pLock(pLock)
    {
        if (m_pLock != NULL)
        {
            InterlockedIncrement(&m_pLock->_m_nRef);
            if (m_pLock->_m_pTIB == NULL)
                m_pLock->_m_pTIB = NtCurrentTeb();
        }
    }

    ~ZSynchronizedHelper()
    {
        if (m_pLock != NULL)
        {
            if (InterlockedDecrement(&m_pLock->_m_nRef) == 0)
                m_pLock->_m_pTIB = NULL;
        }
    }

private:
    ZFatalSection* m_pLock;
};
