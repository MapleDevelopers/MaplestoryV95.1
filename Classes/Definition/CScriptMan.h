#pragma once
#include "TSingleton.h"
#include "CInPacket.h"
#include "CUtilDlgEx.h"
#include "CSlideMenuDlg.h"
#include "CSlideMenuDlgEX.h"
#include "CMSException.h"

class CScriptMan
{
public:
    CScriptMan();
    ~CScriptMan();

    void Init();
    void OnScriptMessage(CInPacket* iPacket);
    void OnSay(int nSpeakerTypeID, int nSpeakerTemplateID, CInPacket* iPacket, char bParam);
    void OnSayImage(int nSpeakerTypeID, int nSpeakerTemplateID, CInPacket* iPacket, char bParam);

    CScriptMan::CScriptMan() : vfptr(nullptr)
                             , m_bProcMessage(0) 
                             , m_pDlg() 
                             , m_pSlideDlg()
                             , m_pSlideDlgEX()
    {
        int* v2 = &m_bProcMessage;
        if (v2) {
            TSingleton<CScriptMan>::ms_pInstance = (CScriptMan*)(v2 - 1);
            vfptr = (void*)&CScriptMan::`vftable';
            *v2 = 0;
        }
        else {
            TSingleton<CScriptMan>::ms_pInstance = nullptr;
            vfptr = (void*)&CScriptMan::`vftable';
            *reinterpret_cast<int*>(this) = 0;
        }
    };

    CScriptMan::~CScriptMan()
    {
        ZRef<CSlideMenuDlgEX>* v2 = &m_pSlideDlgEX;

        vfptr = (void*)&CScriptMan::`vftable';

        if (m_pSlideDlgEX.p) {
            ZRef<CSlideMenuDlgEX>::_ReleaseRaw(&m_pSlideDlgEX, 0);
            v2->p = nullptr;
        }

        // TODO release other dialogs

        //if (m_pSlideDlg.p) 
        //    ZRef<CSlideMenuDlg>::_ReleaseRaw(&m_pSlideDlg, 0); 
    };

private:
    void* vfptr;
    int m_bProcMessage;
    ZRef<CUtilDlgEx> m_pDlg;
    ZRef<CSlideMenuDlg> m_pSlideDlg;
    ZRef<CSlideMenuDlgEX> m_pSlideDlgEX;

    virtual void __vecDelDtor(unsigned int);
};