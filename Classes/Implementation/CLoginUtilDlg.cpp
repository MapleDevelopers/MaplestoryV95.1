#include "../Definition/CLoginUtilDlg.h"
#include "../Definition/CCtrlWnd.h"

void CLoginUtilDlg::Init(CLoginUtilDlg* this, int nType, int nMsg)
{
	CFadeWnd::SetOption(
		(CFadeWnd*)&this->vfptr,
		0,
		255,
		0,
		(POINT)811748819239i64,
		(POINT)897648165139i64,
		(POINT)897648165139i64,
		150,
		0,
		150);

	this->m_nType = nType;
	this->m_nMsg = nMsg;
}

void CLoginUtilDlg::Delete(CLoginUtilDlg* this)
{
	if (this)
		this->vfptr->__vecDelDtor(&this->vfptr, 1);
}

CCtrlWnd** CLoginUtilDlg::HitTest(CLoginUtilDlg* this, int rx, int ry, CCtrlWnd** ppCtrl)
{
	if (ppCtrl)		
		return (CCtrlWnd**)CFadeWnd::HitTest((CFadeWnd*)&this->vfptr, rx, ry, ppCtrl);
}