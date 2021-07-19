#include "../Definition/CDialog.h"

void CDialog::SetRet(CDialog* this, int nRet)
{
    if (!this->m_bTerminate)
    {
        this->m_nRet = nRet;
        this->m_bTerminate = 1;

        if (!this->m_dwWndKey == 0)
            CWnd::Destroy(this);
    }
}