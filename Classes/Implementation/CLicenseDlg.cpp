#include "../Definition/CLogin.h"
#include "../Definition/CUITitle.h"
#include "../Definition/CClientSocket.h"
#include "../Definition/CLicenseDlg.h"

void CLicenseDlg::OnButtonClicked(CLicenseDlg* this, unsigned int nId)
{
    int v3; // edx
    COutPacket oPacket; // [esp+Ch] [ebp-1Ch] BYREF
    int v5; // [esp+24h] [ebp-4h]

    if (nId == 1) //accept
    {
        if (TSingleton<CWvsContext>::ms_pInstance._m_pStr && *((_DWORD*)TSingleton<CWvsContext>::ms_pInstance._m_pStr + 2086))
        {
            CUITitle::EnableLoginCtrl((CUITitle*)TSingleton<CUITitle>::ms_pInstance._m_pStr, 1);
            COutPacket::COutPacket(&oPacket, 11);
            v5 = 0;
            CClientSocket::SendPacket(TSingleton<CClientSocket>::ms_pInstance, v3, &oPacket);
            v5 = -1;
            ZArray<unsigned char>::RemoveAll(&oPacket.m_aSendBuff);
            ((void(__thiscall*)(CLicenseDlg*, int))this->CDialog::CWnd::IGObj::vfptr[13].Update)(this, 1);
        }
        else
        {
            CLogin::OnAcceptLicense(this->m_pLogin);
            ((void(__thiscall*)(CLicenseDlg*, int))this->CDialog::CWnd::IGObj::vfptr[13].Update)(this, 1);
        }
    }
    else //deny/cancel
    {
        CLogin::OnDenyLicense();

        if (nId == 2) //deny
        {
            ((void(__thiscall*)(CLicenseDlg*, int))this->CDialog::CWnd::IGObj::vfptr[13].Update)(this, 2);
        }
        else if (nId == 8) //cancel?
        {
            ((void(__thiscall*)(CLicenseDlg*, int))this->CDialog::CWnd::IGObj::vfptr[13].Update)(this, 8);
        }
    }
}