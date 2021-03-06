#pragma once
#include "FaceLookCodes.h"
#include "ActionKey.h"
#include "ZXString.h"
#include "ZList.h"
#include "ZArray.h"
#include "ZRef.h"
#include "ZMap.h"
#include "ZRefCounted.h"
#include "Ztl_bstr_t.h"
#include "Secret.h"
#include "CActionManVtbl.h"

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
		void* posMap;
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
		void* posMap;
		void* posList;
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
		void* posMap;
	};

	/*
	00000000 CActionMan::MORPHACTIONFRAMEENTRY struc; (sizeof = 0x2C, align = 0x4, copyof_2008)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 rcBody          tagRECT ?
	00000020 ptHead          tagPOINT ?
	00000028 tDelay          dd ?
	0000002C CActionMan::MORPHACTIONFRAMEENTRY ends
	*/
	struct MORPHACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		RECT rcBody;
		POINT ptHead;
		int tDelay;
	};

	/*
	00000000 CActionMan::MORPHACTIONENTRY struc ; (sizeof=0x24, align=0x4, copyof_4109)
	00000000 baseclass_0     ZRefCounted ?
	0000000C dwTemplateID    dd ?
	00000010 nAction         dd ?
	00000014 apFE            ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY> > ?
	00000018 tLastAccessed   dd ?
	0000001C posMap          dd ?                    ; offset
	00000020 posList         dd ?                    ; offset
	00000024 CActionMan::MORPHACTIONENTRY ends
	*/
	struct MORPHACTIONENTRY : ZRefCounted
	{
		unsigned long dwTemplateID;
		int nAction;
		ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>> apFE;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};

	/*
	00000000 CActionMan::MOBIMGENTRY struc ; (sizeof=0x18, align=0x4, copyof_4125)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pImg            _com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000010 tLastAccessed   dd ?
	00000014 posMap          dd ?                    ; offset
	00000018 CActionMan::MOBIMGENTRY ends
	*/
	struct MOBIMGENTRY : ZRefCounted
	{
		//pImg
		int tLastAccessed;
		void* posMap;
	};

	/*
	00000000 CActionMan::MOBACTIONFRAMEENTRY struc ; (sizeof=0x5C, align=0x4, copyof_2195)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 rcBody          SECRECT ?
	00000040 arcMultiBody    ZArray<SECRECT> ?
	00000044 arcAttackOnlyBody ZArray<SECRECT> ?
	00000048 ptHead          tagPOINT ?
	00000050 tDelay          dd ?
	00000054 a0              dd ?
	00000058 a1              dd ?
	0000005C CActionMan::MOBACTIONFRAMEENTRY ends
	*/
	struct MOBACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		SECRECT rcBody;
		ZArray<SECRECT> arcMultiBody;
		ZArray<SECRECT> arcAttackOnlyBody;
		POINT ptHead;
		int tDelay;
		int a0;
		int a1;
	};

	/*
	00000000 CActionMan::MOBACTIONENTRY struc ; (sizeof=0x34, align=0x4, copyof_4141)
	00000000 baseclass_0     ZRefCounted ?
	0000000C dwTemplateID    dd ?
	00000010 nAction         dd ?
	00000014 lpFrame         ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> > ?
	00000028 tLastAccessed   dd ?
	0000002C posMap          dd ?                    ; offset
	00000030 posList         dd ?                    ; offset
	00000034 CActionMan::MOBACTIONENTRY ends
	*/
	struct MOBACTIONENTRY : ZRefCounted
	{
		unsigned long dwTemplateID;
		int nAction;
		ZArray<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> apFE;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};

	/*
	00000000 CActionMan::MELEEATTACKAFTERIMAGE struc ; (sizeof=0x14, align=0x4, copyof_4158)
	00000000 baseclass_0     ZRefCounted ?
	0000000C aapCanvas       ZArray<ZArray<_com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > > > ?
	00000010 arcRange        ZArray<SECRECT> ?
	00000014 CActionMan::MELEEATTACKAFTERIMAGE ends
	*/
	struct MELEEATTACKAFTERIMAGE : ZRefCounted
	{
		//aapCanvas
		ZArray<SECRECT> arcRange;
	};

	/*
	00000000 CActionMan::NPCIMGENTRY struc ; (sizeof=0x18, align=0x4, copyof_4166)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pImg            _com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000010 tLastAccessed   dd ?
	00000014 posMap          dd ?                    ; offset
	00000018 CActionMan::NPCIMGENTRY ends
	*/
	struct NPCIMGENTRY : ZRefCounted
	{
		//pImg
		int tLastAccessed;
		void* posMap;
	};

	/*
	00000000 CActionMan::NPCACTIONFRAMEENTRY struc ; (sizeof=0x14, align=0x4, copyof_2388)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 nDelay          dd ?
	00000014 CActionMan::NPCACTIONFRAMEENTRY ends
	*/
	struct NPCACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		int nDelay;
	};

	/*
	00000000 CActionMan::NPCACTIONENTRY struc ; (sizeof=0x34, align=0x4, copyof_4182)
	00000000 baseclass_0     ZRefCounted ?
	0000000C dwTemplateID    dd ?
	00000010 nAction         dd ?
	00000014 lpFrame         ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY> > ?
	00000028 tLastAccessed   dd ?
	0000002C posMap          dd ?                    ; offset
	00000030 posList         dd ?                    ; offset
	00000034 CActionMan::NPCACTIONENTRY ends
	*/
	struct NPCACTIONENTRY : ZRefCounted
	{
		unsigned long dwTemplateID;
		int nAction;
		ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>> lpFrame;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};

	/*
	00000000 CActionMan::PETIMGENTRY struc ; (sizeof=0x18, align=0x4, copyof_4198)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pImg            _com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000010 tLastAccessed   dd ?
	00000014 posMap          dd ?                    ; offset
	00000018 CActionMan::PETIMGENTRY ends
	*/
	struct PETIMGENTRY : ZRefCounted
	{
		//pImg
		int tLastAccessed;
		void* posMap;
	};

	/*
	00000000 CActionMan::PETACTIONFRAMEENTRY struc ; (sizeof=0x44, align=0x4, copyof_2049)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 rcBody          SECRECT ?
	00000040 nDelay          dd ?
	00000044 CActionMan::PETACTIONFRAMEENTRY ends
	*/
	struct PETACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		SECRECT rcBody;
		int nDelay;
	};

	/*
	00000000 CActionMan::PETACTIONENTRY struc ; (sizeof=0x38, align=0x4, copyof_4214)
	00000000 baseclass_0     ZRefCounted ?
	0000000C dwTemplateID    dd ?
	00000010 nAction         dd ?
	00000014 bZigZag         dd ?
	00000018 lpFrame         ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY> > ?
	0000002C tLastAccessed   dd ?
	00000030 posMap          dd ?                    ; offset
	00000034 posList         dd ?                    ; offset
	00000038 CActionMan::PETACTIONENTRY ends
	*/
	struct PETACTIONENTRY : ZRefCounted
	{
		unsigned long dwTemplateID;
		int nAction;
		bool bZigZag;
		ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>> lpFrame;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};
	
	/*
	00000000 CActionMan::EMPLOYEEIMGENTRY struc ; (sizeof=0x18, align=0x4, copyof_4230)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pImg            _com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> > ?
	00000010 tLastAccessed   dd ?
	00000014 posMap          dd ?                    ; offset
	00000018 CActionMan::EMPLOYEEIMGENTRY ends
	*/
	struct EMPLOYEEIMGENTRY : ZRefCounted
	{
		//pImg
		int tLastAccessed;
		void* posMap;
	};

	/*
	00000000 CActionMan::EMPLOYEEACTIONFRAMEENTRY struc ; (sizeof=0x44, align=0x4, copyof_2417)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 rcBody          SECRECT ?
	00000040 nDelay          dd ?
	00000044 CActionMan::EMPLOYEEACTIONFRAMEENTRY ends
	*/
	struct EMPLOYEEACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		SECRECT rcBody;
		int nDelay;
	};

	/*
	00000000 CActionMan::EMPLOYEEACTIONENTRY struc ; (sizeof=0x38, align=0x4, copyof_4246)
	00000000 baseclass_0     ZRefCounted ?
	0000000C dwTemplateID    dd ?
	00000010 nAction         dd ?
	00000014 bZigZag         dd ?
	00000018 lpFrame         ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY> > ?
	0000002C tLastAccessed   dd ?
	00000030 posMap          dd ?                    ; offset
	00000034 posList         dd ?                    ; offset
	00000038 CActionMan::EMPLOYEEACTIONENTRY ends
	*/
	struct EMPLOYEEACTIONENTRY : ZRefCounted
	{
		unsigned long dwTemplateID;
		int nAction;
		bool bZigZag;
		ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>> lpFrame;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};

	/*
	00000000 CActionMan::SUMMONEDACTIONFRAMEENTRY struc ; (sizeof=0x4C, align=0x4, copyof_2087)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 rcBody          SECRECT ?
	00000040 tDelay          dd ?
	00000044 a0              dd ?
	00000048 a1              dd ?
	0000004C CActionMan::SUMMONEDACTIONFRAMEENTRY ends
	*/
	struct SUMMONEDACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		SECRECT rcBody;
		int nDelay;
		int a0;
		int a1;
	};

	/*
	00000000 CActionMan::SUMMONEDACTIONENTRY struc ; (sizeof=0x3C, align=0x4, copyof_4262)
	00000000 baseclass_0     ZRefCounted ?
	0000000C nSkillID        dd ?
	00000010 nSLV            dd ?
	00000014 nAction         dd ?
	00000018 bZigZag         dd ?
	0000001C lpFrame         ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> > ?
	00000030 tLastAccessed   dd ?
	00000034 posMap          dd ?                    ; offset
	00000038 posList         dd ?                    ; offset
	0000003C CActionMan::SUMMONEDACTIONENTRY ends
	*/
	struct SUMMONEDACTIONENTRY : ZRefCounted
	{
		int nSkillID;
		int nSLV;
		int nAction;
		bool bZigZag;
		ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> lpFrame;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};
	
	/*
	00000000 CActionMan::SHADOWPARTNERACTIONFRAMEENTRY struc ; (sizeof=0x18, align=0x4, copyof_2017)
	00000000 baseclass_0     ZRefCounted ?
	0000000C pCanvas         _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
	00000010 a0              dd ?
	00000014 a1              dd ?
	00000018 CActionMan::SHADOWPARTNERACTIONFRAMEENTRY ends
	*/
	struct SHADOWPARTNERACTIONFRAMEENTRY : ZRefCounted
	{
		//pCanvas
		int a0;
		int a1;
	};

	/*
	00000000 CActionMan::SHADOWPARTNERACTIONENTRY struc ; (sizeof=0x38, align=0x4, copyof_4278)
	00000000 baseclass_0     ZRefCounted ?
	0000000C nSkillID        dd ?
	00000010 nAction         dd ?
	00000014 bZigZag         dd ?
	00000018 lpFrame         ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY> > ?
	0000002C tLastAccessed   dd ?
	00000030 posMap          dd ?                    ; offset
	00000034 posList         dd ?                    ; offset
	00000038 CActionMan::SHADOWPARTNERACTIONENTRY ends
	*/
	struct SHADOWPARTNERACTIONENTRY : ZRefCounted
	{
		int nSkillID;
		int nAction;
		bool bZigZag;
		ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>> lpFrame;
		int tLastAccessed;
		void* posMap;
		void* posList;
	};

	/*
	00000000 CActionMan::DRAGONACTIONENTRY struc ; (sizeof=0x2C, align=0x4, copyof_4300)
	00000000 baseclass_0     ZRefCounted ?
	0000000C nAction         dd ?
	00000010 bZigZag         dd ?
	00000014 lpFrame         ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY> > ?
	00000028 tLastAccessed   dd ?
	0000002C CActionMan::DRAGONACTIONENTRY ends
	*/
	struct DRAGONACTIONENTRY : ZRefCounted
	{
		int nAction;
		bool bZigZag;
		ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> lpFrame;
		int tLastAccessed;
	};

	CActionManVtbl* vfptr;
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