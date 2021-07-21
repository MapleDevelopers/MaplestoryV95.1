#pragma once
#include "CFadeWnd.h"
#include "ZRef.h"
#include "CCtrlButton.h"
#include "CConnectionNoticeDlg.h"

/*
00000000 CUIChannelSelect struc; (sizeof = 0x130, align = 0x4, copyof_10344)
00000000 baseclass_0     CFadeWnd ?
000000F4 m_pLogin        dd ? ; offset
000000F8 m_nUserPopulation dd ?
000000FC m_nSelect       dd ?
00000100 m_pWorldItem    dd ? ; offset
00000104 m_pCanvasWorldName _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
00000108 m_pCanvasGauge  _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
0000010C m_pLayerSelect  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000110 m_pLayerDummy   _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000114 m_bCheck        dd ?
00000118 m_pLayerScroll  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
0000011C m_pLayerEventDesc _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000120 m_pBtCS         ZRef<CCtrlButton> ?
00000128 m_pConnectionDlg ZRef<CConnectionNoticeDlg> ?
00000130 CUIChannelSelect ends
*/
class CUIChannelSelect : CFadeWnd
{
	void* m_pLogin;
	int m_nUserPopulation;
	int m_nSelect;
	void* m_pWorldItem;
	//m_pCanvasWorldName
	//m_pCanvasGauge
	//m_pLayerSelect
	//m_pLayerDummy
	bool m_bCheck;
	//m_pLayerScroll
	//m_pLayerEventDesc
	ZRef<CCtrlButton> m_pBtCS;
	ZRef<CConnectionNoticeDlg> m_pConnectionDlg;
};

