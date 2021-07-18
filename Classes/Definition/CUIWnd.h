#pragma once
#include "ZRef.h"
#include "CUIToolTip.h"
#include "CCtrlButton.h"

/*
 Not FOUND :]
 size unknown
*/
class CUIWnd : IGObj, IUIMsgHandler, ZRefCounted
{
	ZRef<CCtrlButton> m_pBtClose;
	CUIToolTip m_uiToolTip;
	ZXString<unsigned char> m_abOption;
	ZXString<unsigned short> m_sBackgrndUOL;
	int m_nBtCloseType;
	int m_nUIType;
	int m_nBtCloseX;
	int m_nBtCloseY;
	bool m_bBackgrnd;
	int m_nSmallScreenX;
	int m_nSmallScreenY;
	int m_nLargeScreenX;
	int m_nLargeScreenY;
	bool m_bIsLargeMode;
	bool m_bPosSave;
};