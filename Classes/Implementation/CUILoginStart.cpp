#include "../Definition/CUILoginStart.h"

void CUILoginStart::EnableLoginStartCtrl(CUILoginStart* this, int nEnable)
{
    if (this->m_apButton[0].p)
        this->m_apButton[0].p->CCtrlWnd::IUIMsgHandler::vfptr->SetEnable(&this->m_apButton[0].p->IUIMsgHandler, nEnable & 1);

    if (this->m_apButton[1].p)
        this->m_apButton[1].p->CCtrlWnd::IUIMsgHandler::vfptr->SetEnable(&this->m_apButton[1].p->IUIMsgHandler, nEnable & 2);

    if (this->m_apButton[4].p)
        this->m_apButton[4].p->CCtrlWnd::IUIMsgHandler::vfptr->SetEnable(&this->m_apButton[4].p->IUIMsgHandler, nEnable & 0x20);
}