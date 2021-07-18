#include "../Definition/CLogin.h"
#include "../Definition/CLoginUtilDlg.h"
#include "../Definition/CClientSocket.h"
#include "../Definition/CWndMan.h"
#include "../Definition/CUIChannelSelect.h"
#include "../Interfaces/Definition/IUIMsgHandler.h"

void CLogin::OnNewCharJobSel(CLogin* this)
{
	this->m_nSubStep = 2;
	this->m_bSubStepChanged = 1;
}

void CLogin::OnNewCharJobSelCanceled(CLogin* this)
{
	this->m_nSubStep = 0;
	this->m_bSubStepChanged = 1;
}

void CLogin::OnNewCharStep(CLogin* this, int bCharSale)
{
    this->m_bCharSale = bCharSale;
    this->m_nCharSaleJob = 1;

    if (!this->m_nLoginStep == 3)
    {
        if (this->m_WorldItem.a[*((_DWORD*)TSingleton<CWvsContext>::ms_pInstance._m_pStr + 2071)].nBlockCharCreation)
        {
            CLoginUtilDlg::Notice(36, 0);
        }
        else if (this->m_aAvatarData.a[this->m_nSlotCount - 1].characterStat.dwCharacterID)
        {
            CLoginUtilDlg::Error(9, &this->m_pChildModal);
        }
        else
        {
            CLogin::ChangeStep(this, -1);
        }
    }
}

void CLogin::SendRequest(CLogin* this, COutPacket* oPacket)
{
    CClientSocket::SendPacket(TSingleton<CClientSocket>::ms_pInstance, oPacket);
	this->m_bRequestSent = 1;
}

void CLogin::CloseChannelSelect(CLogin* this)
{
    if (TSingleton<CUIChannelSelect>::ms_pInstance)
        CFadeWnd::Close(TSingleton<CUIChannelSelect>::ms_pInstance, 0);
    if (TSingleton<CUIWorldSelect>::ms_pInstance)
    {
        CUIWorldSelect::EnableButtons(TSingleton<CUIWorldSelect>::ms_pInstance, -1);
        if (TSingleton<CWndMan>::ms_pInstance)
        {
            if (TSingleton<CUIWorldSelect>::ms_pInstance)
                CWndMan::SetFocus(TSingleton<CWndMan>::ms_pInstance, &TSingleton<CUIWorldSelect>::ms_pInstance->IUIMsgHandler);
            else
                CWndMan::SetFocus(TSingleton<CWndMan>::ms_pInstance, 0);
        }
    }
}

void CLogin::ExitGame(CLogin* this, int bAsk, IUIMsgHandler* pFocus)
{
    if (this->m_nLoginStep <= this->m_nBaseStep && !this->m_tStepChanging)
    {
        if (bAsk && !CLoginUtilDlg::YesNo(53, &this->m_pChildModal))
        {
            if (pFocus)
            {
                if (TSingleton<CWndMan>::ms_pInstance)
                    CWndMan::SetFocus(TSingleton<CWndMan>::ms_pInstance, pFocus);
            }
        }
        else
        {
            ZAPI.PostQuitMessage(0);
        }
    }
}