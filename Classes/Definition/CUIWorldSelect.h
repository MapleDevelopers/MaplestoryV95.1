#pragma once
#include "CDialog.h"
#include "ZRef.h"
#include "CCtrlButton.h"

/*/
00000000 CUIWorldSelect  struc; (sizeof = 0x1D8, align = 0x4, copyof_10340)
00000000 baseclass_0     CDialog ?
00000090 gap90           db ?
00000091                 db ? ; undefined
00000092                 db ? ; undefined
00000093                 db ? ; undefined
00000094 m_pLogin        dd ? ; offset
00000098 m_nWorld        dd ?
0000009C m_nKeyFocus     dd ?
000000A0 m_pBtWS         ZRef < CCtrlButton> 36 dup(? )
000001C0 m_pLayerWorldInfo _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000001C4 m_apLayerBalloon ZArray<_com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > > ?
000001C8 m_apLayerWorldState ZArray<_com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > > ?
000001CC nBalloonCount   dd ?
000001D0 m_pLayerAdvice  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000001D4 m_nWorldIdx     dd ?
000001D8 CUIWorldSelect  ends
*/

class CUIWorldSelect : CDialog
{
	int gap90;
	unsigned int* m_pLogin;
	int m_nWorld;
	int m_nKeyFocus;
	ZRef<CCtrlButton> m_pBtWS[36];
	//m_pLayerWorldInfo
	//m_apLayerBalloon
	//m_apLayerWorldState
	int nBalloonCount;
	//m_pLayerAdvice
	int m_nWorldIdx;

	void EnableButtons(CUIWorldSelect* this, int nSelIdx);
};