#pragma once
#include "ZRef.h"
#include "CUIToolTip.h"
#include "CCtrlButton.h"

/*
00000000 CUIWnd          struc ; (sizeof=0xB08, align=0x4, copyof_2577)
00000000 baseclass_0     CWnd ?
00000080 m_pBtClose      ZRef<CCtrlButton> ?
00000088 m_uiToolTip     CUIToolTip ?
00000AD0 m_nUIType       dd ?
00000AD4 m_nBtCloseType  dd ?
00000AD8 m_nBtCloseX     dd ?
00000ADC m_nBtCloseY     dd ?
00000AE0 m_nBackgrndX    dd ?
00000AE4 m_nBackgrndY    dd ?
00000AE8 m_nSmallScreenX dd ?
00000AEC m_nSmallScreenY dd ?
00000AF0 m_nLargeScreenX dd ?
00000AF4 m_nLargeScreenY dd ?
00000AF8 m_bIsLargeMode  db ?
00000AF9 m_bPosSave      db ?
00000AFA m_bBackgrnd     db ?
00000AFB                 db ? ; undefined
00000AFC m_nOption       dd ?
00000B00 m_abOption      ZArray<unsigned char> ?
00000B04 m_sBackgrndUOL  ZXString<unsigned short> ?
00000B08 CUIWnd          ends
*/
class CUIWnd : CWnd
{
	ZRef<CCtrlButton> m_pBtClose;
	CUIToolTip m_uiToolTip;
	int m_nUIType;
	int m_nBtCloseType;
	int m_nBtCloseX;
	int m_nBtCloseY;
	int m_nBackgrndX;
	int m_nBackgrndY;
	int m_nSmallScreenX;
	int m_nSmallScreenY;
	int m_nLargeScreenX;
	int m_nLargeScreenY;
	bool m_bIsLargeMode;
	bool m_bPosSave;
	bool m_bBackgrnd;
	int Unknown1;
	int m_nOption;
	ZXString<unsigned char> m_abOption;
	ZXString<unsigned short> m_sBackgrndUOL;
};