#pragma once
#include "IWzShape2D.h"
#include "Ztl_variant_t.h"

/*
00000000 IWzVector2D     struc ; (sizeof=0x4, align=0x4, copyof_1420)
00000000 baseclass_0     IWzShape2D ?
00000004 IWzVector2D     ends
*/
class IWzVector2D : IWzShape2D
{
	int GetcurrentTime(IWzVector2D* this);
	Ztl_variant_t* Getorigin(IWzVector2D* this, Ztl_variant_t* result);
	long double Getra(IWzVector2D* this);
	int Getrx(IWzVector2D* this);
	int Getry(IWzVector2D* this);
	void PutflipX(IWzVector2D* this, int pnFlipX);
	void Putorigin(IWzVector2D* this, const Ztl_variant_t* ppOrigin);
	void Putra(IWzVector2D* this, long double pra);
	HRESULT Ratio(IWzVector2D* this, IWzVector2D* pOrigin, int nOriginWidth, int nOriginHeight, int nScaleWidth, int nScaleHeight);
	HRESULT RelMove(IWzVector2D* this, int nX, int nY, const Ztl_variant_t* nTime, const Ztl_variant_t* nType);
	HRESULT RelOffset(IWzVector2D* this, int nDX, int nDY, const Ztl_variant_t* nTime, const Ztl_variant_t* nType);
	HRESULT Rotate(IWzVector2D* this, long double dAngleAmount, const Ztl_variant_t* nTime);
	HRESULT WrapClip(IWzVector2D* this, const Ztl_variant_t* pOrigin, int nWrapLeft, int nWrapTop, unsigned int uWrapWidth, unsigned int uWrapHeight, const Ztl_variant_t* bClip);
	HRESULT _GetSnapshot(IWzVector2D* this, int* px, int* py, int* prx, int* pry, int* pxOrg, int* pyOrg, long double* pa, long double* paOrg, const Ztl_variant_t* vTime);
};