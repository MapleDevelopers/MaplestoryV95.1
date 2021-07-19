#pragma once
#include "CT_Info.h"
#include "ZRef.h"
#include "CDialog.h"
#include "CCtrlButton.h"
#include "CCtrlScrollBar.h"

/*
00000000 CLicenseDlg     struc; (sizeof = 0xC0, align = 0x4, copyof_10371)
00000000 baseclass_0     CDialog ?
00000090 gap90           db ?
00000091                 db ? ; undefined
00000092                 db ? ; undefined
00000093                 db ? ; undefined
00000094 m_pLogin        dd ? ; offset
00000098 m_pBtOK         ZRef<CCtrlButton> ?
000000A0 m_pBtCancel     ZRef<CCtrlButton> ?
000000A8 m_pScrollBar    ZRef<CCtrlScrollBar> ?
000000B0 m_aCT           ZArray<CT_INFO> ?
000000B4 m_apFont        ZArray<_com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > > ?
000000B8 m_nScrollPos    dd ?
000000BC m_nScrollRange  dd ?
000000C0 CLicenseDlg     ends
*/
class CLicenseDlg : CDialog
{
	int gap90;
	unsigned int* m_pLogin;
	ZRef<CCtrlButton> m_pBtOK;
	ZRef<CCtrlButton> m_pBtCancel;
	ZRef<CCtrlScrollBar> m_pScrollBar;
	ZArray<CT_INFO> m_aCT;
	//m_apFont
	int m_nScrollPos;
	int m_nScrollRange;

	void OnButtonClicked(CLicenseDlg* this, unsigned int nId)
};