#include "../Definition/CLogin.h"
#include "../Definition/ClientSocket.h"
#include "../Definition/CWndMan.h"
#include "../Interfaces/Definition/IUIMsgHandler.h"

void CLogin::SendRequest(CLogin* this, COutPacket* oPacket)
{
    CClientSocket::SendPacket(TSingleton<CClientSocket>::ms_pInstance, oPacket);
	this->m_bRequestSent = 1;
}

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