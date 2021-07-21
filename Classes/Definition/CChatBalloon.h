#pragma once
#include "CChatBalloonVtbl.h

/*
00000000 CChatBalloon    struc ; (sizeof=0x68, align=0x4, copyof_1990)
00000000 vfptr           dd ?                    ; offset
00000004 m_pLayerChat    _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000008 m_pLayerAD      _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
0000000C m_pLayerGameState _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000010 m_pLayerShop    _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000014 m_pLayerBack    _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000018 m_pLayerEffect  _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
0000001C m_pButton       _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > 4 dup(?)
0000002C m_nADPosX       dd ?
00000030 m_nADPosY       dd ?
00000034 m_nADButtonPosX dd ?
00000038 m_nADButtonPosY dd ?
0000003C m_bADButtonPressed dd ?
00000040 m_tChatBegin    dd ?
00000044 m_tTimeOut      dd ?
00000048 m_nPosX         dd ?
0000004C m_nPosY         dd ?
00000050 m_nHeight       dd ?
00000054 m_bMiniRoomBalloon dd ?
00000058 m_bAbbreviated  dd ?
0000005C m_nCanvasWidth  dd ?
00000060 m_nCanvasHeight dd ?
00000064 m_tFadeDalay    dd ?
00000068 CChatBalloon    ends
*/
class CChatBalloon
{
	CChatBalloonVtbl* vfptr;
	//m_pLayerChat
	//m_pLayerAD
	//m_pLayerGameState
	//m_pLayerShop
	//m_pLayerBack
	//m_pLayerEffect
	//m_pButton
	int m_nADPosX;
	int m_nADPosY;
	int m_nADButtonPosX;
	int m_nADButtonPosY;
	bool m_bADButtonPressed;
	int m_tChatBegin;
	int m_tTimeOut;
	int m_nPosX;
	int m_nPosY;
	int m_nHeight;
	bool m_bMiniRoomBalloon;
	bool m_bAbbreviated;
	int m_nCanvasWidth;
	int m_nCanvasHeight;
	int m_tFadeDalay;
};