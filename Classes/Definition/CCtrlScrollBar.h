#pragma once
#include "ZXString.h"
#include "CCtrlWnd.h"

/*
00000000 CCtrlScrollBar  struc; (sizeof = 0x74, align = 0x4, copyof_1560)
00000000 baseclass_0     CCtrlWnd ?
00000034 m_nWheelRange   dd ?
00000038 m_nCurPos       dd ?
0000003C m_nScrollRange  dd ?
00000040 m_nLastHT       dd ?
00000044 m_dwLastHT      dd ?
00000048 m_bCapture      dd ?
0000004C m_grid          dd ?
00000050 m_length        dd ?
00000054 m_hv            dd ?
00000058 m_type          dd ?
0000005C m_thumbPos      dd ?
00000060 m_thumbX        dd ?
00000064 m_thumbY        dd ?
00000068 m_bHideThumb    dd ?
0000006C m_bTranslucent  dd ?
00000070 m_sUOL          ZXString<unsigned short> ?
00000074 CCtrlScrollBar  ends
*/
class CCtrlScrollBar : CCtrlWnd
{
	int m_nWheelRange;
	int m_nCurPos;
	int m_nScrollRange;
	int m_nLastHT;
	unsigned long m_dwLastHT;
	int m_bCapture;
	int m_grid;
	int m_hv;
	int m_type;
	int m_thumbX;
	int m_thumbY;
	bool m_bHideThumb;
	bool m_bTranslucent;
	ZXString<unsigned short> m_sUOL;
};