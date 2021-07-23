#pragma once
#include "CItemInfoVtbl.h"
#include "ZXString.h"
#include "ZList.h"
#include "ZMap.h"
#include "ZRef.h"
#include "ZFatalSection.h"

/*
00000000 CItemInfo       struc ; (sizeof=0x298, align=0x4, copyof_5885)
00000000 vfptr           dd ?                    ; offset
00000004 m_mItemCRC      ZMap<long,unsigned long,long> ?
0000001C m_mQuestDeliveryItem ZMap<long,ZRef<CItemInfo::QUESTDELIVERYITEM>,long> ?
00000034 m_lock          ZFatalSection ?
0000003C m_mEquipItem    ZMap<long,ZRef<CItemInfo::EQUIPITEM>,long> ?
00000054 m_mBundleItem   ZMap<long,ZRef<CItemInfo::BUNDLEITEM>,long> ?
0000006C m_mItemString   ZMap<long,ZMap<char const *,ZXString<char>,ZXString<char> >,long> ?
00000084 m_mMapString    ZMap<unsigned long,ZMap<char const *,ZXString<char>,ZXString<char> >,unsigned long> ?
0000009C m_mSetItemInfo  ZMap<long,ZRef<CItemInfo::SETITEMINFO>,long> ?
000000B4 m_mPetFoodItem  ZMap<long,ZRef<CItemInfo::PETFOODITEM>,long> ?
000000CC m_mBridleItem   ZMap<long,ZRef<CItemInfo::BRIDLEITEM>,long> ?
000000E4 m_mLotteryItem  ZMap<long,ZRef<CItemInfo::LOTTERYITEM>,long> ?
000000FC m_mExtendExpireDateItem ZMap<long,ZRef<CItemInfo::EXTENDEXPIREDATEITEM>,long> ?
00000114 m_mExpiredProtectingItem ZMap<long,ZRef<CItemInfo::EXPIREDPROTECTINGITEM>,long> ?
0000012C m_mProtectOnDieItem ZMap<long,ZRef<CItemInfo::PROTECTONDIEITEM>,long> ?
00000144 m_mKarmaScissorsItem ZMap<long,ZRef<CItemInfo::KARMASCISSORSITEM>,long> ?
0000015C m_lHalloweenItem ZList<long> ?
00000170 m_mAreaBuffItem ZMap<long,ZRef<CItemInfo::AREABUFFITEM>,long> ?
00000188 m_mIncLevelItem ZMap<long,ZRef<CItemInfo::INCLEVELITEM>,long> ?
000001A0 m_mGachaponItemInfo ZMap<long,ZRef<CItemInfo::GACHAPONITEMINFO>,long> ?
000001B8 m_pItemShadow   _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001BC m_pCashIcon     _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001C0 m_pCashIconForPrepaidCashItems _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001C4 m_pProtectedIcon _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001C8 m_pQualityIcon_bad _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001CC m_pQualityIcon_good _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001D0 m_pQualityIcon_veryGood _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001D4 m_pQualityIcon_premium _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001D8 m_pQualityIcon_excellent _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001DC m_pQualityIcon_special _com_ptr_t<_com_IIID<IWzCanvas,&_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
000001E0 m_mNPTItemException ZMap<long,long,long> ?
000001F8 m_mCoupleChairItem ZMap<long,ZRef<CItemInfo::COUPLECHAIRITEM>,long> ?
00000210 m_lSetItemEffect ZList<CItemInfo::SET_EFFECT> ?
00000224 m_mNoScanItem   ZMap<long,int,long> ?
0000023C m_lItemNameforScanner ZList<ZRef<ITEMNAME> > ?
00000250 m_mDamageModifiedByUpgrade ZMap<ZXString<char>,ZRef<DamageModifiedInfo>,ZXString<char> > ?
00000268 m_mEquipAffectDamageModifier ZMap<long,ZRef<ZArray<ZXString<char> > >,long> ?
00000280 m_mMonsterAffectDamageModifier ZMap<long,ZXString<char>,long> ?
00000298 CItemInfo       ends
*/
class CItemInfo
{
	/*
	00000000 CItemInfo::QUESTDELIVERYITEM struc ; (sizeof=0x34, align=0x4, copyof_5627)
	00000000 nItemID         dd ?
	00000004 nType           dd ?
	00000008 sEffect         ZXString<char> ?
	0000000C lDisallowComplete ZList<unsigned short> ?
	00000020 lDisallowAccept ZList<unsigned short> ?
	00000034 CItemInfo::QUESTDELIVERYITEM ends
	*/
	struct QUESTDELIVERYITEM
	{
		int nItemID;
		int nType;
		ZXString<char> sEffect;
		ZList<unsigned short> lDisallowComplete;
		ZList<unsigned short> lDisallowAccept;
	};

	/*
	00000000 CItemInfo::EQUIPITEM struc ; (sizeof=0x270, align=0x8, copyof_5875)
	00000000 _ZtlSecureTear_nItemID dd 2 dup(?)
	00000008 _ZtlSecureTear_nItemID_CS dd ?
	0000000C bTimeLimited    dd ?
	00000010 sItemName       ZXString<char> ?
	00000014 bsUOL           Ztl_bstr_t ?
	00000018 _ZtlSecureTear_nrSTR dd 2 dup(?)
	00000020 _ZtlSecureTear_nrSTR_CS dd ?
	00000024 _ZtlSecureTear_nrINT dd 2 dup(?)
	0000002C _ZtlSecureTear_nrINT_CS dd ?
	00000030 _ZtlSecureTear_nrDEX dd 2 dup(?)
	00000038 _ZtlSecureTear_nrDEX_CS dd ?
	0000003C _ZtlSecureTear_nrLUK dd 2 dup(?)
	00000044 _ZtlSecureTear_nrLUK_CS dd ?
	00000048 _ZtlSecureTear_nrPOP dd 2 dup(?)
	00000050 _ZtlSecureTear_nrPOP_CS dd ?
	00000054 _ZtlSecureTear_nrJob dd 2 dup(?)
	0000005C _ZtlSecureTear_nrJob_CS dd ?
	00000060 _ZtlSecureTear_nrLevel dd 2 dup(?)
	00000068 _ZtlSecureTear_nrLevel_CS dd ?
	0000006C _ZtlSecureTear_nrMobLevel dd 2 dup(?)
	00000074 _ZtlSecureTear_nrMobLevel_CS dd ?
	00000078 nReplaceItemID  dd ?
	0000007C sReplaceMsg     ZXString<char> ?
	00000080 nReplacePeriod  dd ?
	00000084 _ZtlSecureTear_nSellPrice dd 2 dup(?)
	0000008C _ZtlSecureTear_nSellPrice_CS dd ?
	00000090 _ZtlSecureTear_bCash dd 2 dup(?)
	00000098 _ZtlSecureTear_bCash_CS dd ?
	0000009C niMaxHPr        dw ?
	0000009E niMaxMPr        dw ?
	000000A0 _ZtlSecureTear_nRUC db 2 dup(?)
	000000A2                 db ? ; undefined
	000000A3                 db ? ; undefined
	000000A4 _ZtlSecureTear_nRUC_CS dd ?
	000000A8 _ZtlSecureTear_nTUC db 2 dup(?)
	000000AA                 db ? ; undefined
	000000AB                 db ? ; undefined
	000000AC _ZtlSecureTear_nTUC_CS dd ?
	000000B0 _ZtlSecureTear_niSTR dw 2 dup(?)
	000000B4 _ZtlSecureTear_niSTR_CS dd ?
	000000B8 _ZtlSecureTear_niDEX dw 2 dup(?)
	000000BC _ZtlSecureTear_niDEX_CS dd ?
	000000C0 _ZtlSecureTear_niINT dw 2 dup(?)
	000000C4 _ZtlSecureTear_niINT_CS dd ?
	000000C8 _ZtlSecureTear_niLUK dw 2 dup(?)
	000000CC _ZtlSecureTear_niLUK_CS dd ?
	000000D0 _ZtlSecureTear_niMaxHP dw 2 dup(?)
	000000D4 _ZtlSecureTear_niMaxHP_CS dd ?
	000000D8 _ZtlSecureTear_niMaxMP dw 2 dup(?)
	000000DC _ZtlSecureTear_niMaxMP_CS dd ?
	000000E0 _ZtlSecureTear_niPAD dw 2 dup(?)
	000000E4 _ZtlSecureTear_niPAD_CS dd ?
	000000E8 _ZtlSecureTear_niMAD dw 2 dup(?)
	000000EC _ZtlSecureTear_niMAD_CS dd ?
	000000F0 _ZtlSecureTear_niPDD dw 2 dup(?)
	000000F4 _ZtlSecureTear_niPDD_CS dd ?
	000000F8 _ZtlSecureTear_niMDD dw 2 dup(?)
	000000FC _ZtlSecureTear_niMDD_CS dd ?
	00000100 _ZtlSecureTear_niACC dw 2 dup(?)
	00000104 _ZtlSecureTear_niACC_CS dd ?
	00000108 _ZtlSecureTear_niEVA dw 2 dup(?)
	0000010C _ZtlSecureTear_niEVA_CS dd ?
	00000110 _ZtlSecureTear_niCraft dw 2 dup(?)
	00000114 _ZtlSecureTear_niCraft_CS dd ?
	00000118 _ZtlSecureTear_niSpeed dw 2 dup(?)
	0000011C _ZtlSecureTear_niSpeed_CS dd ?
	00000120 _ZtlSecureTear_niJump dw 2 dup(?)
	00000124 _ZtlSecureTear_niJump_CS dd ?
	00000128 _ZtlSecureTear_niSwim dw 2 dup(?)
	0000012C _ZtlSecureTear_niSwim_CS dd ?
	00000130 _ZtlSecureTear_niFatigue dw 2 dup(?)
	00000134 _ZtlSecureTear_niFatigue_CS dd ?
	00000138 _ZtlSecureTear_nKnockback dd 2 dup(?)
	00000140 _ZtlSecureTear_nKnockback_CS dd ?
	00000144                 db ? ; undefined
	00000145                 db ? ; undefined
	00000146                 db ? ; undefined
	00000147                 db ? ; undefined
	00000148 _ZtlSecureTear_dRecovery dq 2 dup(?)
	00000158 _ZtlSecureTear_dRecovery_CS dd ?
	0000015C                 db ? ; undefined
	0000015D                 db ? ; undefined
	0000015E                 db ? ; undefined
	0000015F                 db ? ; undefined
	00000160 _ZtlSecureTear_dFs dq 2 dup(?)
	00000170 _ZtlSecureTear_dFs_CS dd ?
	00000174 _ZtlSecureTear_nSwim dd 2 dup(?)
	0000017C _ZtlSecureTear_nSwim_CS dd ?
	00000180 _ZtlSecureTear_nTamingMob dd 2 dup(?)
	00000188 _ZtlSecureTear_nTamingMob_CS dd ?
	0000018C _ZtlSecureTear_nIUC dd 2 dup(?)
	00000194 _ZtlSecureTear_nIUC_CS dd ?
	00000198 nMinGrade       db ?
	00000199                 db ? ; undefined
	0000019A                 db ? ; undefined
	0000019B                 db ? ; undefined
	0000019C bQuest          dd ?
	000001A0 bPartyQuest     dd ?
	000001A4 bOnly           dd ?
	000001A8 bOnlyEquip      dd ?
	000001AC bTradeBlock     dd ?
	000001B0 nAppliableKarmaType dd ?
	000001B4 bNotSale        dd ?
	000001B8 bBigSize        dd ?
	000001BC bExpireOnLogout dd ?
	000001C0 nirPoison       dw ?
	000001C2 nirIce          dw ?
	000001C4 nirFire         dw ?
	000001C6 nirLight        dw ?
	000001C8 nirHoly         dw ?
	000001CA                 db ? ; undefined
	000001CB                 db ? ; undefined
	000001CC bBindedWhenEquiped dd ?
	000001D0 dwSpecialID     dd ?
	000001D4 bNotExtend      dd ?
	000001D8 bAccountSharable dd ?
	000001DC bSharableOnce   dd ?
	000001E0 dwAfterimageFlag dd ?
	000001E4 nUserInfoScale  dd ?
	000001E8 ptUserInfoDiff  tagPOINT ?
	000001F0 uPetTemplateFlag UINT128 ?
	00000200 dwPetAbilityFlag dd ?
	00000204 nNameTag        dd ?
	00000208 nChatBalloon    dd ?
	0000020C anLevelUpTypePool ZArray<long> ?
	00000210 apLevelInfo     ZArray<ZRef<CItemInfo::LevelInfo> > ?
	00000214 bEpic           dd ?
	00000218 nSetItemID      dd ?
	0000021C sDesc           ZXString<char> ?
	00000220 lpItemSkill     ZList<ZRef<CItemInfo::ItemSkill> > ?
	00000234 mSkillLevelBonus ZMap<long,long,long> ?
	0000024C aBonusExpRate   ZArray<ZPair<long,long> > ?
	00000250 aPotionDiscountRate ZArray<ZPair<long,long> > ?
	00000254 aTamingMobItem  ZArray<long> ?
	00000258 pAddition       ZRef<CItemInfo::EQUIPITEM::ADDITION> ?
	00000260 nDurability     dd ?
	00000264 nEnchantCategory dd ?
	00000268 bTransform      dd ?
	0000026C nIUCMax         dd ?
	00000270 CItemInfo::EQUIPITEM ends
	*/
	struct EQUIPITEM
	{
	};

	/*
	00000000 CItemInfo::BUNDLEITEM struc ; (sizeof=0x80, align=0x8, copyof_5907)
	00000000 sItemName       ZXString<char> ?
	00000004 nItemID         dd ?
	00000008 bTimeLimited    dd ?
	0000000C bOnly           dd ?
	00000010 bTradeBlock     dd ?
	00000014 nAppliableKarmaType dd ?
	00000018 bNotSale        dd ?
	0000001C bBigSize        dd ?
	00000020 bExpireOnLogout dd ?
	00000024 bNoCancelMouse  dd ?
	00000028 nPAD            dd ?
	0000002C nRequiredLEV    dd ?
	00000030 lReqField       ZList<unsigned long> ?
	00000044 nSellPrice      dd ?
	00000048 dSellUnitPrice  dq ?
	00000050 bCash           dd ?
	00000054 bQuest          dd ?
	00000058 bPartyQuest     dd ?
	0000005C nMaxPerSlot     dw ?
	0000005E nMax            dw ?
	00000060 usReqQuestOnProgress dw ?
	00000062                 db ? ; undefined
	00000063                 db ? ; undefined
	00000064 nMCType         dd ?
	00000068 bMonsterBookCard dd ?
	0000006C nReplaceItemID  dd ?
	00000070 sReplaceMsg     ZXString<char> ?
	00000074 nReplacePeriod  dd ?
	00000078 bAccountSharable dd ?
	0000007C                 db ? ; undefined
	0000007D                 db ? ; undefined
	0000007E                 db ? ; undefined
	0000007F                 db ? ; undefined
	00000080 CItemInfo::BUNDLEITEM ends
	*/
	struct BUNDLEITEM
	{
		ZXString<char> sItemName;
		int nItemID;
		bool bTimeLimited;
		bool bOnly;
		bool bTradeBlock;
		int nAppliableKarmaType;
		bool bNotSale;
		bool bBigSize;
		bool bExpireOnLogout;
		bool bNoCancelMouse;
		int nPAD;
		int nRequiredLEV;
		ZList<unsigned long> lReqField;
		int nSellPrice;
		double dSellUnitPrice;
		bool bCash;
		bool bQuest;
		bool bPartyQuest;
		int nMaxPerSlot;
		int nMax;
		unsigned short usReqQuestOnProgress;
		char Unknown1;
		char Unknown2;
		int nMCType;
		bool bMonsterBookCard;
		int nReplaceItemID;
		ZXString <char> sReplaceMsg;
		int nReplacePeriod;
		bool bAccountSharable;
		int Unknown3;
	};

	CItemInfoVtbl* vfptr;
	ZMap<long, unsigned long, long> m_mItemCRC;
	ZMap<long, ZRef<QUESTDELIVERYITEM>, long> m_mQuestDeliveryItem;
	ZFatalSection<void> m_lock;
	ZMap<long, ZRef<EQUIPITEM>, long> m_mEquipItem;
	ZMap<long, ZRef<BUNDLEITEM>, long> m_mBundleItem;
	ZMap<long, ZMap<char const*, ZXString<char>, ZXString<char> >, long> m_mItemString;
	ZMap<unsigned long, ZMap<char const*, ZXString<char>, ZXString<char>>, unsigned long> m_mMapString;
	ZMap<long, ZRef<SETITEMINFO>, long>C m_mSetItemInfo;
	ZMap<long, ZRef<PETFOODITEM>, long> m_mPetFoodItem;
	ZMap<long, ZRef<BRIDLEITEM>, long> m_mBridleItem;
	ZMap<long, ZRef<LOTTERYITEM>, long> m_mLotteryItem;
	ZMap<long, ZRef<EXTENDEXPIREDATEITEM>, long> m_mExtendExpireDateItem;
	ZMap<long, ZRef<EXPIREDPROTECTINGITEM>, long> m_mExpiredProtectingItem;
	ZMap<long, ZRef<PROTECTONDIEITEM>, long> m_mProtectOnDieItem;
	ZMap<long, ZRef<KARMASCISSORSITEM>, long> m_mKarmaScissorsItem;
	ZList<long> m_lHalloweenItem;
	ZMap<long, ZRef<AREABUFFITEM>, long> m_mAreaBuffItem;
	ZMap<long, ZRef<INCLEVELITEM>, long> m_mIncLevelItem;
	ZMap<long, ZRef<GACHAPONITEMINFO>, long> m_mGachaponItemInfo;
	//m_pItemShadow 
	//m_pCashIcon
	//m_pCashIconForPrepaidCashItems
	//m_pProtectedIcon
	//m_pQualityIcon_bad
	//m_pQualityIcon_good
	//m_pQualityIcon_veryGood
	//m_pQualityIcon_premium
	//m_pQualityIcon_excellent
	//m_pQualityIcon_special
	ZMap<long, long, long> m_mNPTItemException;
	ZMap<long, ZRef<COUPLECHAIRITEM>, long> m_mCoupleChairItem;
	ZList<CItemInfo::SET_EFFECT> m_lSetItemEffect;
	ZMap<long, int, long> m_mNoScanItem;
	ZList<ZRef<ITEMNAME>> m_lItemNameforScanner;
	ZMap<ZXString<char>, ZRef<DamageModifiedInfo>, ZXString<char>> m_mDamageModifiedByUpgrade;
	ZMap<long, ZRef<ZArray<ZXString<char>>>, long> m_mEquipAffectDamageModifier;
	ZMap<long, ZXString<char>, long> m_mMonsterAffectDamageModifier;
};