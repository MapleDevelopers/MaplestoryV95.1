#pragma once
#include "CWnd.h"
#include "ZRef.h"
#include "CCtrlButton.h"

/*
00000000 CUINewCharAvatarSelect struc; (sizeof = 0x14C, align = 0x4, copyof_6589)
00000000 baseclass_0     CWnd ?
00000080 m_pLogin        dd ? ; offset
00000084 m_pBtLeft       ZRef < CCtrlButton> 9 dup(? )
000000CC m_pBtRight      ZRef < CCtrlButton> 9 dup(? )
00000114 m_pBtYes        ZRef<CCtrlButton> ?
0000011C m_pBtNo         ZRef<CCtrlButton> ?
00000124 m_pLayerBkg     _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000128 m_pCanvasSel    _com_ptr_t < _com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > 9 dup(? )
0000014C CUINewCharAvatarSelect ends
*/
class CUINewCharAvatarSelect : CWnd
{
	void* m_pLogin;
	ZRef<CCtrlButton> m_pBtLeft[9];
	ZRef<CCtrlButton> m_pBtRight[9];
	ZRef<CCtrlButton> m_pBtYes;
	ZRef<CCtrlButton> m_pBtNo;
	//m_pLayerBkg
	//m_pCanvasSel
};
