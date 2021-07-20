#pragma once
#include "IWzSerialize.h"

/*
00000000 IWzCanvas       struc ; (sizeof=0x4, align=0x4, copyof_1446)
00000000 baseclass_0     IWzSerialize ?
00000004 IWzCanvas       ends
*/
class IWzCanvas : IWzSerialize
{
	HRESULT Copy(IWzCanvas* this, int nDstLeft, int nDstTop, IWzCanvas* pSource, const Ztl_variant_t* nAlpha);
	HRESULT CopyEx(IWzCanvas* this, int nDstLeft, int nDstTop, IWzCanvas* pSource, CANVAS_ALPHATYPE nAlpha, int nWidth, int nHeight, int nSrcLeft, int nSrcTop, int nSrcWidth, int nSrcHeight, const Ztl_variant_t* pAdjust);
	HRESULT Create(IWzCanvas* this, unsigned int uWidth, unsigned int uHeight, const Ztl_variant_t* nMagLevel, const Ztl_variant_t* nPixFormat);
	HRESULT DrawLine(IWzCanvas* this, int x1, int y1, int x2, int y2, unsigned int uColor, const Ztl_variant_t* nWidth);
	HRESULT DrawRectangle(IWzCanvas* this, int nLeft, int nTop, unsigned int uWidth, unsigned int uHeight, unsigned int uColor);
	unsigned int DrawTextA(IWzCanvas* this, int nLeft, int nTop, Ztl_bstr_t sText, IWzFont* pFont, const Ztl_variant_t* vAlpha, const Ztl_variant_t* vTabOrg);
	int Getcx(IWzCanvas* this);
	int Getcy(IWzCanvas* this);
	unsigned int Getheight(IWzCanvas* this);
	_com_ptr_t<_com_IIID<IWzProperty, &_GUID_986515d9_0a0b_4929_8b4f_718682177b92>>* Getproperty(IWzCanvas* this, _com_ptr_t<_com_IIID<IWzProperty, &_GUID_986515d9_0a0b_4929_8b4f_718682177b92>>* result);
	_com_ptr_t<_com_IIID<IWzRawCanvas, &_GUID_312126f0_c399_4111_8eab_0f96a30b6b7c>>* GetrawCanvas(IWzCanvas* this, _com_ptr_t<_com_IIID<IWzRawCanvas, &_GUID_312126f0_c399_4111_8eab_0f96a30b6b7c>>* result, int x, int y);
	unsigned int GettileHeight(IWzCanvas* this);
	unsigned int GettileWidth(IWzCanvas* this);
	unsigned int Getwidth(IWzCanvas* this);
	void Putcx(IWzCanvas* this, int pnX);
	void Putcy(IWzCanvas* this, int pnY);
	Ztl_variant_t* SetClipRect(IWzCanvas* this, Ztl_variant_t* result, int nLeft, int nTop, int nWidth, int nHeight, const Ztl_variant_t* bTemp);
};