#include "../Definition/CFadeWnd.h"

void CFadeWnd::SetOption(CFadeWnd* this, int a0, int a, int a1, POINT pt0, POINT pt, POINT pt1, int t0, int t, int t1)
{
	this->m_a0 = a0;
	this->m_a = a;
	this->m_a1 = a1;
	this->m_pt0 = pt0;
	this->m_pt = pt;
	this->m_pt1 = pt1;
	this->m_t0 = t0;
	this->m_t = t;
	this->m_t1 = t1;
}

void CFadeWnd::Close(CFadeWnd* this, int bOK)
{
	this->m_bClose = 1;
	this->m_bOK = bOK;
}