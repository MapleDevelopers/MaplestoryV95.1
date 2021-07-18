#pragma once
#include "CWnd.h"
#include "CUIWnd.h"
#include "Secpoint.h"
#include "Dragctx.h"

/*
00000000 CWndMan         struc; (sizeof = 0x13C, align = 0x4, copyof_3402)
00000000 baseclass_0     CWnd ?
00000080 m_lpCapture     ZList<IUIMsgHandler*> ?
00000094 m_pActiveWnd    dd ? ; offset
00000098 m_pDragWnd      dd ? ; offset
0000009C m_bDropByMouseUp dd ?
000000A0 m_pFocus        dd ? ; offset
000000A4 m_pCursorHandler dd ? ; offset
000000A8 m_ctxDrag       DRAGCTX ?
000000B4 m_ptCursor      SECPOINT ?
000000CC m_tLastScrShot  dd ?
000000D0 m_nScrShotCount dd ?
000000D4 m_hWnd          dd ? ; offset
000000D8 m_hNewIMC       dd ? ; offset
000000DC m_hOldIMC       dd ? ; offset
000000E0 m_dwIMEProperty dd ?
000000E4 m_bIMEActive    dd ?
000000E8 m_abIMECompAttr ZArray<unsigned char> ?
000000EC m_adwIMECompClause ZArray<unsigned long> ?
000000F0 m_aIMECand      ZArray<unsigned char> ?
000000F4 m_sIMEResultStr ZArray<char> ?
000000F8 m_sIMECompStr   ZArray<char> ?
000000FC m_nIMECursorPos dd ?
00000100 m_bWndAttachEnabled dd ?
00000104 m_pOrgWindow    _com_ptr_t < _com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > 9 dup(? )
00000128 m_lUIWnd        ZList<CUIWnd*> ?
0000013C CWndMan         ends
*/
class CWndMan : CWnd
{
	ZList<IUIMsgHandler*> m_lpCapture;
	unsigned int* m_pActiveWnd;
	unsigned int* m_pDragWnd;
	bool m_bDropByMouseUp;
	unsigned int* m_pFocus;
	unsigned int* m_pCursorHandler;
	DRAGCTX m_ctxDrag;
	SECPOINT m_ptCursor;
	int m_tLastScrShot;
	int m_nScrShotCount;
	unsigned int* m_hWnd;
	unsigned int* m_hNewIMC;
	unsigned int* m_hOldIMC;
	unsigned long m_dwIMEProperty;
	bool m_bIMEActive;
	ZArray<unsigned char> m_abIMECompAttr;
	ZArray<unsigned long> m_adwIMECompClause;
	ZArray<unsigned char> m_aIMECand;
	ZArray<char> m_sIMEResultStr;
	ZArray<char> m_sIMECompStr;
	int m_nIMECursorPos;
	bool m_bWndAttachEnabled;
	//m_pOrgWindow
	ZList<CUIWnd*> m_lUIWnd;
};