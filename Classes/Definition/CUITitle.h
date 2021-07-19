#pragma once
#include "CUIToolTip.h"
#include "CCtrlEdit.h"

/*
00000000 CUITitle        struc ; (sizeof=0xBA4, align=0x4, copyof_10369)
00000000 baseclass_0     CFadeWnd ?
000000F4 m_pLogin        dd ?                    ; offset
000000F8 m_bRememberMailAddr dd ?
000000FC m_pCanvasRMA    _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > 2 dup(?)
00000104 m_rcRMA         tagRECT ?
00000114 m_pBtLogin      ZRef<CCtrlButton> ?
0000011C m_pBtEmailSave  ZRef<CCtrlButton> ?
00000124 m_pBtEmailLost  ZRef<CCtrlButton> ?
0000012C m_pBtPasswdLost ZRef<CCtrlButton> ?
00000134 m_pBtNew        ZRef<CCtrlButton> ?
0000013C m_pBtHomePage   ZRef<CCtrlButton> ?
00000144 m_pBtQuit       ZRef<CCtrlButton> ?
0000014C m_pEditID       ZRef<CCtrlEdit> ?
00000154 m_pEditPasswd   ZRef<CCtrlEdit> ?
0000015C m_uiToolTipTitle CUIToolTip ?
00000BA4 CUITitle        ends
*/
class CUITitle : CFadeWnd
{
	unsigned int* m_pLogin;
	bool m_bRememberMailAddr;
	//m_pCanvasRMA
	RECT m_rcRMA;
	ZRef<CCtrlButton> m_pBtLogin;
	ZRef<CCtrlButton> m_pBtEmailSave;
	ZRef<CCtrlButton> m_pBtEmailLost;
	ZRef<CCtrlButton> m_pBtPasswdLost;
	ZRef<CCtrlButton> m_pBtNew;
	ZRef<CCtrlButton> m_pBtHomePage;
	ZRef<CCtrlButton> m_pBtQuit;
	ZRef<CCtrlEdit> m_pEditID;
	ZRef<CCtrlEdit> m_pEditPasswd;
	CUIToolTip m_uiToolTipTitle;
};