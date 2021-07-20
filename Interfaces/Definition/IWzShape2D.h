#pragma once
#include "IWzSerialize.h"

/*
00000000 IWzShape2D      struc; (sizeof = 0x4, align = 0x4, copyof_1419)
00000000 baseclass_0     IWzSerialize ?
00000004 IWzShape2D      ends
*/
class IWzShape2D : IWzSerialize
{
	unsigned int Getcount(IWzShape2D* this);
	int Getx(IWzShape2D* this);
	int Gety(IWzShape2D* this);
	HRESULT Move(IWzShape2D* this, int nX, int nY);
	HRESULT Offset(IWzShape2D* this, int nDX, int nDY);
	void Putx(IWzShape2D* this, int pVal);
};
