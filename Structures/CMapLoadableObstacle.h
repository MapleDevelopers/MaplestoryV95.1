#pragma once
#include "../Types/ZrefCounted.h"

/*
00000000 CMapLoadable::OBSTACLE struc; (sizeof = 0x38, align = 0x4, copyof_3663)
00000000 baseclass_0     ZRefCounted ?
0000000C pLayer          _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
00000010 bFlip           dd ?
00000014 nDamage         dd ?
00000018 nMobDamage      dd ?
0000001C nDirection      dd ?
00000020 nMobSkillID     dd ?
00000024 nSLV            dd ?
00000028 nForceHP        dd ?
0000002C sName           ZXString<char> ?
00000030 dwTargetField   dd ?
00000034 bSafeZoneByMob  dd ?
00000038 CMapLoadable::OBSTACLE ends
*/

struct OBSTACLE
{
	ZRefCounted counted_reference;
	//pLayer
	bool bFlip;
	int nDamage;
	int nMobDamage;
	int nDirection;
	int nMobSkillID;
	int nSLV;
	int nForceHP;
	int sName;
	int dwTargetField;
	int bSafeZoneByMob;
};