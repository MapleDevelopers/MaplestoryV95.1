#pragma once
#include "IUnknown.h"
#include "Ztl_bstr_t.h"
#include "Ztl_variant_t.h"

/*
00000000 IWzFont         struc ; (sizeof=0x4, align=0x4, copyof_1525)
00000000 baseclass_0     IUnknown ?
00000004 IWzFont         ends
*/
class IWzFont : IUnknown
{
	int CalcLongestText(IWzFont* this, Ztl_bstr_t sText, int nWidth, const Ztl_variant_t* vTabOrg);
	int CalcLongestTextForGlobal(IWzFont* this, Ztl_bstr_t sText, int nWidth, const Ztl_variant_t* vTabOrg);
	int CalcLongestTextForGlobalEx(IWzFont* this, Ztl_bstr_t sText, int nWidth, int* pnPosAdj, const Ztl_variant_t* vTabOrg);
	unsigned int CalcTextWidth(IWzFont* this, Ztl_bstr_t sText, const Ztl_variant_t* vTabOrg);
	HRESULT Create(IWzFont* this, Ztl_bstr_t sName, unsigned int uHeight, unsigned int uColor, const Ztl_variant_t* sStyle);
	unsigned int DrawTextA(IWzFont* this, int nLeft, int nTop, Ztl_bstr_t sText, IWzCanvas* pCanvas, const Ztl_variant_t* vAlpha, const Ztl_variant_t* vTabOrg);
	int GetfullHeight(IWzFont* this);
	int Getheight(IWzFont* this);
};