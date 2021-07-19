#pragma once
#include "CCtrlWnd.h"

/*
00000000 CCtrlEdit       struc; (sizeof = 0xBC, align = 0x4, copyof_1562)
00000000 baseclass_0     CCtrlWnd ?
00000034 m_sText         ZXString<char> ?
00000038 m_ptText        tagPOINT ?
00000040 m_ptCaret       tagPOINT ?
00000048 m_col           dd ?
0000004C m_ext           dd ?
00000050 m_adwIMECompClause ZArray<unsigned long> ?
00000054 m_nCurClause    dd ?
00000058 m_nCaretX       dd ?
0000005C m_selCol        dd ?
00000060 m_nViewportX    dd ?
00000064 m_nViewportWidth dd ?
00000068 m_pFont         _com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > ?
0000006C m_pFontDisabled _com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > ?
00000070 m_pFontSel      _com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > ?
00000074 m_pFontCand     _com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > ?
00000078 m_pFontCandSel  _com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > ?
0000007C m_nFontHeight   dd ?
00000080 m_nBackColor    dd ?
00000084 m_bPasswd       dd ?
00000088 m_bReadOnly     dd ?
0000008C m_nHorzMax      dd ?
00000090 m_bNumber       dd ?
00000094 m_pCanvasEmptyText _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
00000098 m_editCaret     CCtrlEdit::CEditCaret ?
000000B0 m_pIMECandWnd   ZRef<CWnd> ?
000000B8 m_pParentComboBox dd ? ; offset
000000BC CCtrlEdit       ends
*/
class CCtrlEdit : CCtrlWnd
{
};