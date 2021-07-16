#pragma once
#include "CDialog.h"
#include "CLogin.h"

/*
00000000 CConnectionNoticeDlg struc; (sizeof = 0xA4, align = 0x4, copyof_4914)
00000000 baseclass_0     CDialog ?
00000090 gap90           db ?
00000091                 db ? ; undefined
00000092                 db ? ; undefined
00000093                 db ? ; undefined
00000094 m_pLogin        dd ? ; offset
00000098 m_pBtCancel     ZRef<CCtrlButton> ?
000000A0 m_pLayerAnimationBar _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000000A4 CConnectionNoticeDlg ends
*/
class CConnectionNoticeDlg : CDialog
{
	unsigned int Unknown1;
	CLogin* m_pLogin;
	ZRef<CCtrlButton> m_pBtCancel;
	//m_pLayerAnimationBar
};