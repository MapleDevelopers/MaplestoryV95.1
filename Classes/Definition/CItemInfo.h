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

	CItemInfoVtbl* vfptr;
	ZMap<long, unsigned long, long> m_mItemCRC;
	ZMap<long, ZRef<QUESTDELIVERYITEM>, long> m_mQuestDeliveryItem;
	ZFatalSection<void> m_lock;
	ZMap<long, ZRef<EQUIPITEM>, long> m_mEquipItem;
};