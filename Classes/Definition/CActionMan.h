#pragma once
#include "FaceLookCodes.h"
#include "ActionKey.h"
#include "ZXString.h"
#include "ZList.h"
#include "ZRef.h"
#include "ZMap.h"
#include "ZRefCounted.h"
#include "Ztl_bstr_t.h"
//#include "CActionManVtbl.h"

/*
00000000 CActionMan      struc; (sizeof = 0x2B8, align = 0x4, copyof_4325)
00000000 vfptr           dd ? ; offset
00000004 m_lCharacterImgEntry ZList<ZRef<CActionMan::CHARACTERIMGENTRY>> ?
00000018 m_mCharacterImgEntry ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long> ?
00000030 m_lFaceLook     ZList<ZRef<CActionMan::FACELOOKENTRY> > ?
00000044 m_mFaceLook     ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES> ?
0000005C m_msCharacterUOL ZMap<long, ZXString<char>, long> ?
00000074 m_lMorphImgEntry ZList<ZRef<CActionMan::MORPHIMGENTRY> > ?
00000088 m_mMorphImgEntry ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>, long> ?
000000A0 m_lMorphAction  ZList<ZRef<CActionMan::MORPHACTIONENTRY> > ?
000000B4 m_mMorphAction  ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long> ?
000000CC m_lMobImgEntry  ZList<ZRef<CActionMan::MOBIMGENTRY> > ?
000000E0 m_mMobImgEntry  ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long> ?
000000F8 m_lMobAction    ZList<ZRef<CActionMan::MOBACTIONENTRY> > ?
0000010C m_mMobAction    ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long> ?
00000124 m_mAfterimage   ZMap<unsigned short const*, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString<unsigned short> > ?
0000013C m_lNpcImgEntry  ZList<ZRef<CActionMan::NPCIMGENTRY> > ?
00000150 m_mNpcImgEntry  ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long> ?
00000168 m_lNpcAction    ZList<ZRef<CActionMan::NPCACTIONENTRY> > ?
0000017C m_mNpcAction    ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64> ?
00000194 m_lPetImgEntry  ZList<ZRef<CActionMan::PETIMGENTRY> > ?
000001A8 m_mPetImgEntry  ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long> ?
000001C0 m_lPetAction    ZList<ZRef<CActionMan::PETACTIONENTRY> > ?
000001D4 m_mPetAction    ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long> ?
000001EC m_lEmployeeImg Entry ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY> > ?
00000200 m_mEmployeeImg Entry ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long> ?
00000218 m_lEmployeeAction ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY> > ?
0000022C m_mEmployeeAction ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long> ?
00000244 m_lSummonedAction ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY> > ?
00000258 m_mSummonedAction ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey> ?
00000270 m_lShadowPartnerAction ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY> > ?
00000284 m_mShadowPartnerAction ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long> ?
0000029C m_mDragonAction ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long> ?
000002B4 m_tLastSweepCache dd ?
000002B8 CActionMan      ends
*/
class CActionMan
{
	/*
	00000000 CActionMan::CHARACTERIMGENTRY struc; (sizeof = 0x44, align = 0x4, copyof_4061)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pImg            _com_ptr_t<_com_IIID<IWzProperty, &_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000010 sISlot          Ztl_bstr_t ?
	00000014 sVSlot          Ztl_bstr_t ?
	00000018 nWeapon         dd ?
	0000001C sWeaponAfterimage Ztl_bstr_t ?
	00000020 nAttackSpeed    dd ?
	00000024 nWalk           dd ?
	00000028 nStand          dd ?
	0000002C nAttack         dd ?
	00000030 tLastAccessed   dd ?
	00000034 posMap          dd ? ; offset
	00000038 sSfx            Ztl_bstr_t ?
	0000003C bWeekly         dd ?
	00000040 pWeeklyImg      _com_ptr_t<_com_IIID<IWzProperty, &_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000044 CActionMan::CHARACTERIMGENTRY ends
	*/
	struct CHARACTERIMGENTRY : ZRefCounted
	{
		//pImg
		Ztl_bstr_t sISlot;
		Ztl_bstr_t sVSlot;
		int nWeapon;
		Ztl_bstr_t sWeaponAfterimage;
		int nAttackSpeed;
		int nWalk;
		int nStand;
		int nAttack;
		int tLastAccessed;
		unsigned int* posMap;
		Ztl_bstr_t sSfx;
		bool bWeekly;
		//pWeeklyImg
	};

	/*
	00000000 CActionMan::FACELOOKENTRY struc ; (sizeof=0x30, align=0x4, copyof_4077)
	00000000 baseclass_0     ZRefCounted ?
	0000000C lpEmotion       ZList<_com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > > ?
	00000020 tDuration       dd ?
	00000024 tLastAccessed   dd ?
	00000028 posMap          dd ?                    ; offset
	0000002C posList         dd ?                    ; offset
	00000030 CActionMan::FACELOOKENTRY ends
	*/
	struct FACELOOKENTRY : ZRefCounted
	{
		//lpEmotion
		int tDuration;
		int tLastAccessed;
		unsigned int* posMap;
		unsigned int* posList;
	};

	/*
	00000000 CActionMan::MORPHIMGENTRY struc ; (sizeof=0x18, align=0x4, copyof_4093)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pImg            _com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000010 tLastAccessed   dd ?
	00000014 posMap          dd ?                    ; offset
	00000018 CActionMan::MORPHIMGENTRY ends
	*/
	struct MORPHIMGENTRY : ZRefCounted
	{
		//pImg
		int tLastAccessed;
		unsigned int* posMap;
	};

	/*
	
	*/
	struct MORPHACTIONENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct MOBIMGENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct MOBACTIONENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct MELEEATTACKAFTERIMAGE : ZRefCounted
	{
	};

	/*

	*/
	struct NPCIMGENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct NPCACTIONENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct PETIMGENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct PETACTIONENTRY : ZRefCounted
	{
	};
	
	/*

	*/
	struct EMPLOYEEIMGENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct EMPLOYEEACTIONENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct SUMMONEDACTIONENTRY : ZRefCounted
	{
	};
	
	/*

	*/
	struct SHADOWPARTNERACTIONENTRY : ZRefCounted
	{
	};

	/*

	*/
	struct DRAGONACTIONENTRY : ZRefCounted
	{
	};

	//CActionManVtbl* vfptr;
	ZList<ZRef<CActionMan::CHARACTERIMGENTRY>> m_lCharacterImgEntry;
	ZMap<long, ZRef<CActionMan::CHARACTERIMGENTRY>, long> m_mCharacterImgEntry;
	ZList<ZRef<CActionMan::FACELOOKENTRY>> m_lFaceLook;
	ZMap<FACELOOKCODES, ZRef<CActionMan::FACELOOKENTRY>, FACELOOKCODES> m_mFaceLook;
	ZMap<long, ZXString<char>, long> m_msCharacterUOL;
	ZList<ZRef<CActionMan::MORPHIMGENTRY>> m_lMorphImgEntry;
	ZMap<long, ZRef<CActionMan::MORPHIMGENTRY>> m_mMorphImgEntry;
	ZList<ZRef<CActionMan::MORPHACTIONENTRY>> m_lMorphAction;
	ZMap<unsigned long, ZRef<CActionMan::MORPHACTIONENTRY>, unsigned long> m_mMorphAction;
	ZList<ZRef<CActionMan::MOBIMGENTRY>> m_lMobImgEntry;
	ZMap<long, ZRef<CActionMan::MOBIMGENTRY>, long> m_mMobImgEntry;
	ZList<ZRef<CActionMan::MOBACTIONENTRY>> m_lMobAction;
	ZMap<unsigned long, ZRef<CActionMan::MOBACTIONENTRY>, unsigned long> m_mMobAction; 
	ZMap<unsigned short const*, ZRef<CActionMan::MELEEATTACKAFTERIMAGE>, ZXString<unsigned short>> m_mAfterimage;
	ZList<ZRef<CActionMan::NPCIMGENTRY>> m_lNpcImgEntry;
	ZMap<long, ZRef<CActionMan::NPCIMGENTRY>, long> m_mNpcImgEntry;
	ZList<ZRef<CActionMan::NPCACTIONENTRY>> m_lNpcAction;
	ZMap<__int64, ZRef<CActionMan::NPCACTIONENTRY>, __int64> m_mNpcAction;
	ZList<ZRef<CActionMan::PETIMGENTRY>> m_lPetImgEntry;
	ZMap<long, ZRef<CActionMan::PETIMGENTRY>, long> m_mPetImgEntry;
	ZList < ZRef<CActionMan::PETACTIONENTRY>> m_lPetAction;
	ZMap<unsigned long, ZRef<CActionMan::PETACTIONENTRY>, unsigned long> m_mPetAction;
	ZList<ZRef<CActionMan::EMPLOYEEIMGENTRY>> m_lEmployeeImgEntry;
	ZMap<long, ZRef<CActionMan::EMPLOYEEIMGENTRY>, long> m_mEmployeeImgEntry;
	ZList<ZRef<CActionMan::EMPLOYEEACTIONENTRY>> m_lEmployeeAction;
	ZMap<unsigned long, ZRef<CActionMan::EMPLOYEEACTIONENTRY>, unsigned long> m_mEmployeeAction;
	ZList<ZRef<CActionMan::SUMMONEDACTIONENTRY>> m_lSummonedAction;
	ZMap<ActionKey, ZRef<CActionMan::SUMMONEDACTIONENTRY>, ActionKey> m_mSummonedAction;
	ZList<ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>> m_lShadowPartnerAction;
	ZMap<unsigned long, ZRef<CActionMan::SHADOWPARTNERACTIONENTRY>, unsigned long> m_mShadowPartnerAction;
	ZMap<long, ZMap<long, ZRef<CActionMan::DRAGONACTIONENTRY>, long>, long> m_mDragonAction;
	int m_tLastSweepCache;
};