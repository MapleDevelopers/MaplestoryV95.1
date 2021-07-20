#pragma once
#include "IWzSerialize.h"
#include "IUnknown.h"
#include "Ztl_bstr_t.h"
#include "Ztl_variant_t.h"

/*
00000000 IWzProperty     struc; (sizeof = 0x4, align = 0x4, copyof_1523)
00000000 baseclass_0     IWzSerialize ?
00000004 IWzProperty     ends
*/
class IWzProperty : IWzSerialize
{
	HRESULT Add(IWzProperty* this, Ztl_bstr_t sName, const Ztl_variant_t* vValue, const Ztl_variant_t* bNoReplace);
	unsigned int Getcount(IWzProperty* this);
	_com_ptr_t<_com_IIID<IUnknown, &_GUID_00000000_0000_0000_c000_000000000046>>* Get_NewEnum(IWzProperty* this, _com_ptr_t<_com_IIID<IUnknown, &_GUID_00000000_0000_0000_c000_000000000046>>* result);
	Ztl_variant_t* Getitem(IWzProperty* this, Ztl_variant_t* result, Ztl_bstr_t sPath);
	void Putitem(IWzProperty* this, Ztl_bstr_t sPath, const Ztl_variant_t* pvValue);
};
