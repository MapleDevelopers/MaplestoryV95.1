#pragma once
#include "ZRef.h"
#include "ZXString.h"
#include "CFadeWnd.h"

/*
00000000 CLoginUtilDlg   struc; (sizeof = 0x12C, align = 0x4, copyof_6230)
00000000 baseclass_0     CFadeWnd ?
000000F4 m_nRet          dd ?
000000F8 m_bTerminate    dd ?
000000FC m_nType         dd ?
00000100 m_nMsg          dd ?
00000104 m_pCanvasText   _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
00000108 m_pBtOK         ZRef<CCtrlButton> ?
00000110 m_pBtCancel     ZRef<CCtrlButton> ?
00000118 m_pEditBirthDate ZRef<CCtrlEdit> ?
00000120 m_bCheck        dd ?
00000124 m_pLayerScroll  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000128 m_sScrollNotice ZXString<unsigned short> ?
0000012C CLoginUtilDlg   ends
0000012C
*/
class CLoginUtilDlg : CFadeWnd
{
	int m_nRet;
	bool m_bTerminate;
	int m_nType;
	int m_nMsg;
	//m_pCanvasText
	ZRef<CCtrlButton> m_pBtOK;
	ZRef<CCtrlButton> m_pBtCancel;
	ZRef<CCtrlEdit> m_pEditBirthDate;
	bool m_bCheck;
	//m_pLayerScroll
	ZXString<unsigned short> m_sScrollNotice;

	void Init(CLoginUtilDlg* this, int nType, int nMsg);
	void Notice(int nMsg, ZRef<CDialog>* ppDialog);
	void Error(int nMsg, ZRef<CDialog>* ppDialog);
};

