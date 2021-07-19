#pragma once

/*
00000000 CT_INFO         struc; (sizeof = 0x44, align = 0x4, copyof_2250)
00000000 nType           dd ?
00000004 nItemNo         dd ?
00000008 nLine           dd ?
0000000C pFont           _com_ptr_t<_com_IIID<IWzFont, &_GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac> > ?
00000010 sText           ZXString<char> ?
00000014 pIcon           _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
00000018 nLeft           dd ?
0000001C nTop            dd ?
00000020 nWidth          dd ?
00000024 nHeight         dd ?
00000028 nSelect         dd ?
0000002C nUnderLine      dd ?
00000030 bLineChange     dd ?
00000034 nFuncCode       dd ?
00000038 bReward         dd ?
0000003C nNpcNo          dd ?
00000040 nMapNo          dd ?
00000044 CT_INFO         ends
*/
struct CT_INFO 
{
	int nType;
	int nItemNo;
	int nLine;
	// pFont    
	ZXString<char> sText;
	//pIcon
	int nLeft;
	int nTop;
	int nWidth;
	int nHeight;
	int nSelect;
	int nUnderLine;
	bool bLineChange;
	int nFuncCode;
	bool bReward;
	int nNpcNo;
	int nMapNo;
};