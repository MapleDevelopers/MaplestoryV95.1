#pragma once
#include "IGObj.h"
#include "IUIMsgHandler.h"
#include "IUIMsgHandler.h"
#include "ZRef.h"

/*
00000000 CWnd            struc; (sizeof = 0x80, align = 0x4, copyof_1443)
00000000 baseclass_0     IGObj ?
00000004 baseclass_4     IUIMsgHandler ?
00000008 baseclass_8     ZRefCounted ?
00000014 m_dwWndKey      dd ?
00000018 m_pLayer        _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
0000001C m_pAnimationLayer _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000020 m_pOverlabLayer _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000024 m_width         dd ?
00000028 m_height        dd ?
0000002C m_rcInvalidated tagRECT ?
0000003C m_bScreenCoord  dd ?
00000040 m_nBackgrndX    dd ?
00000044 m_nBackgrndY    dd ?
00000048 m_ptCursorRel   SECPOINT ?
00000060 m_lpChildren    ZList<ZRef<CCtrlWnd> > ?
00000074 m_pFocusChild   dd ? ; offset
00000078 m_pBackgrnd     _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
0000007C m_origin        dd ? ; enum CWnd::UIOrigin
00000080 CWnd            ends
*/
class CWnd : IGObj, IUIMsgHandler, ZRefCounted
{
};