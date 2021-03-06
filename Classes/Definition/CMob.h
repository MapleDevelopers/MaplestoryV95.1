#pragma once
#include "CActionMan.h"
#include "CLife.h"
#include "CInPacket.h"
#include "CFadeoutBullet.h"
#include "CAttrShoe.h"
#include "ZArray.h"
#include "TSecType.h"
#include "MobStat.h"
#include "Range.h"
#include "Rect.h"
#include "Secpoint.h"
#include "UINT128.h"
#include "_ZtlSecure_.h"

/*
00000000 CMob            struc; (sizeof = 0x5E8, align = 0x8, copyof_2235)
00000000 baseclass_0     CLife ?
00000088 m_nMobChargeCount dd ?
0000008C m_bAttackReady  dd ?
00000090 m_nAngerGaugeCount dd ?
00000094 m_nUpdateTime   dd ?
00000098 m_nCurrIndicatorIndex dd ?
0000009C m_bFullChargeEffectTime dd ?
000000A0 m_bFullChargeEffectStartTime dd ?
000000A4 m_effectAttack  CMob::ATTACKEFFECT ?
000000B0 m_lAffectedSkillEntry ZList<CMob::AFFECTEDSKILLENTRY> ?
000000C4 m_lAttackEntry  ZList<CMob::ATTACKENTRY> ?
000000D8 m_lpLayerASAni  ZList<_com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > > ?
000000EC m_lpLayerASIcon ZList<_com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > > ?
00000100 m_posAffectedGuidedBullet dd ? ; offset
00000104 m_pvc           _com_ptr_t<_com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
00000108 m_pvcActive     _com_ptr_t<_com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
0000010C m_pvcHead       _com_ptr_t<_com_IIID<IWzVector2D, &_GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4> > ?
00000110 _ZtlSecureTear_m_bInViewSplit dd 2 dup(? )
00000118 _ZtlSecureTear_m_bInViewSplit_CS dd ?
0000011C _ZtlSecureTear_m_nMobCtrlState dd 2 dup(? )
00000124 _ZtlSecureTear_m_nMobCtrlState_CS dd ?
00000128 _ZtlSecureTear_m_nMobCtrlSN dw 2 dup(? )
0000012C _ZtlSecureTear_m_nMobCtrlSN_CS dd ?
00000130 m_nSkillCommand dd ?
00000134 m_nSLV          dd ?
00000138 m_nSummonType   dd ?
0000013C m_tSummonEffect dd ?
00000140 m_tDoomEffectEnd dd ?
00000144 _ZtlSecureTear_m_tLastApplyCtrl dd 2 dup(? )
0000014C _ZtlSecureTear_m_tLastApplyCtrl_CS dd ?
00000150 _ZtlSecureTear_m_tLastTryPickUpDrop dd 2 dup(? )
00000158 _ZtlSecureTear_m_tLastTryPickUpDrop_CS dd ?
0000015C m_tLastAreaAttack dd ?
00000160 m_bDoFirstAttack dd ?
00000164 m_uLayerStateCounter dd ?
00000168 _ZtlSecureTear_m_dwMobID dd 2 dup(? )
00000170 _ZtlSecureTear_m_dwMobID_CS dd ?
00000174 m_pTemplate     dd ? ; offset
00000178 m_pTemplateByDoom dd ? ; offset
0000017C _ZtlSecureTear_m_nMP dd 2 dup(? )
00000184 _ZtlSecureTear_m_nMP_CS dd ?
00000188 m_stat          MobStat ?
000003C0 m_rgHorz        RANGE ?
000003C8 m_nTeamForMCarnival dd ?
000003CC m_nPhase        dd ?
000003D0 _ZtlSecureTear_m_nMoveAction dd 2 dup(? )
000003D8 _ZtlSecureTear_m_nMoveAction_CS dd ?
000003DC _ZtlSecureTear_m_nOneTimeAction dd 2 dup(? )
000003E4 _ZtlSecureTear_m_nOneTimeAction_CS dd ?
000003E8 _ZtlSecureTear_m_tHitExpire dd 2 dup(? )
000003F0 _ZtlSecureTear_m_tHitExpire_CS dd ?
000003F4 _ZtlSecureTear_m_tLastHitExpire dd 2 dup(? )
000003FC _ZtlSecureTear_m_tLastHitExpire_CS dd ?
00000400 m_posFrame      dd ? ; offset
00000404 _ZtlSecureTear_m_tCurFrameRemain dd 2 dup(? )
0000040C _ZtlSecureTear_m_tCurFrameRemain_CS dd ?
00000410 _ZtlSecureTear_m_tNextFramesRemain dd 2 dup(? )
00000418 _ZtlSecureTear_m_tNextFramesRemain_CS dd ?
0000041C _ZtlSecureTear_m_tActionDelay dd 2 dup(? )
00000424 _ZtlSecureTear_m_tActionDelay_CS dd ?
00000428 m_rcBody        tagRECT ?
00000438 m_rcBodyFlip    tagRECT ?
00000448 m_arcMultiBody  ZArray<tagRECT> ?
0000044C m_arcMultiBodyFlip ZArray<tagRECT> ?
00000450 m_arcAttackBody ZArray<tagRECT> ?
00000454 m_arcAttackBodyFlip ZArray<tagRECT> ?
00000458 m_aAction       ZArray<ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY> > > ?
0000045C _ZtlSecureTear_m_tInitDelay dd 2 dup(? )
00000464 _ZtlSecureTear_m_tInitDelay_CS dd ?
00000468 _ZtlSecureTear_m_nDeadType dd 2 dup(? )
00000470 _ZtlSecureTear_m_nDeadType_CS dd ?
00000474 _ZtlSecureTear_m_nSuspended dd 2 dup(? )
0000047C _ZtlSecureTear_m_nSuspended_CS dd ?
00000480 m_tLastPoisonDamage dd ?
00000484 m_tLastVenomDamage dd ?
00000488 m_tLastAmbushDamage dd ?
0000048C m_tLastObstacleDamage dd ?
00000490 m_tLastHitByMob dd ?
00000494 m_tLastHitDazzledMob dd ?
00000498 m_ldwRevive     ZList<unsigned long> ?
000004AC m_lDamageInfo   ZList<CMob::DAMAGEINFO> ?
000004C0 m_lHitEffect    ZList<CMob::HITEFFECT> ?
000004D4 m_lDropPickUpLog ZList<CMob::DROPPICKUP> ?
000004E8 m_pLayerAction  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004EC m_nCalcDamageStatIndex dd ?
000004F0 m_pLayerHPTag   _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004F4 m_pEffectLayer  _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004F8 m_pLayerAngerTag _com_ptr_t<_com_IIID<IWzGr2DLayer, &_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
000004FC m_bNeedToUpdateCrc dd ?
00000500 m_dwMobCrc      dd ?
00000504 m_tLastHitted   dd ?
00000508 m_pCanvasHPIndicator _com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > ?
0000050C m_mDelayedHPIndicator ZMap<long, long, long> ?
00000524 m_pCanvasAngerIndicatorArrayCount ZArray<long> ?
00000528 m_pCanvasAngerIndicatorArray ZArray<ZArray<_com_ptr_t<_com_IIID<IWzCanvas, &_GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e> > > > ?
0000052C m_nGaugeCount   dd ?
00000530 m_pAttrShoe     ZRef<CAttrShoe> ?
00000538 m_ptPos         SECPOINT ?
00000550 m_ptPosPrev     SECPOINT ?
00000568 m_nHPpercentage dd ?
0000056C m_bWaitingToBeSetTossed dd ?
00000570 m_aMultiTargetForBall ZArray<tagPOINT> ?
00000574 m_aRandTimeforAreaAttack ZArray<long> ?
00000578 m_delaySkill    CMob::DelaySkill ?
00000588 m_bDoomReserved dd ?
0000058C m_bDoomReservedSN db ?
0000058D                 db ? ; undefined
0000058E                 db ? ; undefined
0000058F                 db ? ; undefined
00000590 m_lpStatChangeReserved ZList<ZRef<CMob::ReservedPacket> > ?
000005A4 m_bChasing      TSecType<int> ?
000005B0 m_tTimeBomb     dd ?
000005B4 m_dwSwallowCharacterID dd ?
000005B8 m_dwTargetMobID dd ?
000005BC m_tEscortStopActTime dd ?
000005C0 m_nEscortStopAct dd ?
000005C4 m_nDamagedByMobHPBarState dd ?
000005C8 m_nRushAttackIdx dd ?
000005CC m_tRushAttackEnd dd ?
000005D0 m_Bullets       CMob::MobBullet::Container ?
000005E8 CMob            ends
*/
class CMob : CLife
{
	/*
	00000000 CMob::ATTACKEFFECT struc; (sizeof = 0xC, align = 0x4, copyof_2176)
	00000000; XREF: CMob / r
	00000000 tStart          dd ?
	00000004 bLeft           dd ?
	00000008 sEffect         Ztl_bstr_t ?
	0000000C CMob::ATTACKEFFECT ends
	*/
	struct ATTACKEFFECT
	{
		int tStart;
		bool bLeft;
		Ztl_bstr_t sEffect;
	};

	/*
	00000000 CMob::AFFECTEDSKILLENTRY struc ; (sizeof=0x18, align=0x4, copyof_2181)
	00000000 nSkillID        dd ?
	00000004 tStart          dd ?
	00000008 posList         dd ?                    ; offset
	0000000C bIcon           dd ?
	00000010 bFlip           dd ?
	00000014 pLayer          _com_ptr_t<_com_IIID<IWzGr2DLayer,&_GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf> > ?
	00000018 CMob::AFFECTEDSKILLENTRY ends
	*/
	struct AFFECTEDSKILLENTRY
	{
		int nSkillID;
		int tStart;
		void* posList;
		bool bIcon;
		bool bFlip;
		//pLayer
	};

	/*
	00000000 CMob::ATTACKENTRY struc ; (sizeof=0x20, align=0x4, copyof_2187)
	00000000 tTime           dd ?
	00000004 nType           dd ?
	00000008 ___u2           $8D0FFB5756D375F4E287AC335782F0D3 ?
	00000018 bLeft           dd ?
	0000001C nAttackIdx      dd ?
	00000020 CMob::ATTACKENTRY ends
	*/
	struct ATTACKENTRY
	{
		int tTime;
		int nType;

		union ___u2
		{
		};

		bool bLeft;
		int nAttackIdx;
	};

	/*
	00000000 CMob::DelaySkill struc; (sizeof = 0x10, align = 0x4, copyof_2215)
	00000000 tSkillDelayTime dd ?
	00000004 nSkillID        dd ?
	00000008 nSLV            dd ?
	0000000C nOption         dd ?
	00000010 CMob::DelaySkill ends	
	*/
	struct DelaySkill
	{
		int tSkillDelayTime;
		int nSkillID;
		int nSLV;
		int nOption;
	};

	/*
	00000000 CMob::ReservedPacket struc; (sizeof = 0x2C, align = 0x4, copyof_2222)
	00000000 bSet            dd ?
	00000004 uFlag           UINT128 ?
	00000014 iPacket         CInPacket ?
	0000002C CMob::ReservedPacket ends
	*/
	struct ReservedPacket
	{
		bool bSet;
		UINT128 uFlag;
		CInPacket iPacket;
	};

	/*
	00000000 CMob::MobBullet struc; (sizeof = 0x44, align = 0x4, copyof_2232)
	00000000 baseclass_0     CFadeoutBullet ?
	00000034 m_nZ            dd ?
	00000038 m_bLeft         dd ?
	0000003C m_sBallUOL      Ztl_bstr_t ?
	00000040 m_nAttackIdx    dd ?
	00000044 CMob::MobBullet ends
	*/
	struct MobBullet : CFadeoutBullet
	{
		int m_nZ;
		bool m_bLeft;
		Ztl_bstr_t m_sBallUOL;
		int m_nAttackIdx;

		/*
		00000000 CMob::MobBullet::Container struc ; (sizeof=0x18, align=0x4, copyof_2234)
		00000000 baseclass_0     BulletContainer<CMob::MobBullet> ?
		00000018 CMob::MobBullet::Container ends
		*/
		struct Container : BulletContainer<MobBullet>
		{
		};
	};

	/*
	00000000 CMob::DAMAGEINFO struc ; (sizeof=0xA8, align=0x4, copyof_2202)
	00000000 _ZtlSecureTear_tDelayedProcess dd 2 dup(?)
	00000008 _ZtlSecureTear_tDelayedProcess_CS dd ?
	0000000C _ZtlSecureTear_dwCharacterId dd 2 dup(?)
	00000014 _ZtlSecureTear_dwCharacterId_CS dd ?
	00000018 _ZtlSecureTear_nSkillID dd 2 dup(?)
	00000020 _ZtlSecureTear_nSkillID_CS dd ?
	00000024 _ZtlSecureTear_nHitAction dd 2 dup(?)
	0000002C _ZtlSecureTear_nHitAction_CS dd ?
	00000030 _ZtlSecureTear_bLeft dd 2 dup(?)
	00000038 _ZtlSecureTear_bLeft_CS dd ?
	0000003C _ZtlSecureTear_nDamage dd 2 dup(?)
	00000044 _ZtlSecureTear_nDamage_CS dd ?
	00000048 _ZtlSecureTear_bCriticalAttack dd 2 dup(?)
	00000050 _ZtlSecureTear_bCriticalAttack_CS dd ?
	00000054 _ZtlSecureTear_nAttackIdx dd 2 dup(?)
	0000005C _ZtlSecureTear_nAttackIdx_CS dd ?
	00000060 _ZtlSecureTear_bChase dd 2 dup(?)
	00000068 _ZtlSecureTear_bChase_CS dd ?
	0000006C _ZtlSecureTear_nMoveType dd 2 dup(?)
	00000074 _ZtlSecureTear_nMoveType_CS dd ?
	00000078 _ZtlSecureTear_nBulletCashItemID dd 2 dup(?)
	00000080 _ZtlSecureTear_nBulletCashItemID_CS dd ?
	00000084 _ZtlSecureTear_nMoveEndingPosX dd 2 dup(?)
	0000008C _ZtlSecureTear_nMoveEndingPosX_CS dd ?
	00000090 _ZtlSecureTear_nMoveEndingPosY dd 2 dup(?)
	00000098 _ZtlSecureTear_nMoveEndingPosY_CS dd ?
	0000009C _ZtlSecureTear_bMoveLeft dd 2 dup(?)
	000000A4 _ZtlSecureTear_bMoveLeft_CS dd ?
	000000A8 CMob::DAMAGEINFO ends
	*/
	struct DAMAGEINFO
	{
		_ZtlSecureTear_ tDelayedProcess[2];
		_ZtlSecureTear_ tDelayedProcess_CS;
		_ZtlSecureTear_ dwCharacterId[2];
		_ZtlSecureTear_ dwCharacterId_CS;
		_ZtlSecureTear_ nSkillID[2];
		_ZtlSecureTear_ nSkillID_CS;
		_ZtlSecureTear_ nHitAction[2];
		_ZtlSecureTear_ nHitAction_CS;
		_ZtlSecureTear_ bLeft[2];
		_ZtlSecureTear_ bLeft_CS;
		_ZtlSecureTear_ nDamage[2];
		_ZtlSecureTear_ nDamage_CS;
		_ZtlSecureTear_ bCriticalAttack[2];
		_ZtlSecureTear_ bCriticalAttack_CS;
		_ZtlSecureTear_ nAttackIdx[2];
		_ZtlSecureTear_ nAttackIdx_CS;
		_ZtlSecureTear_ bChase[2];
		_ZtlSecureTear_ bChase_CS;
		_ZtlSecureTear_ nMoveType[2];
		_ZtlSecureTear_ nMoveType_CS;
		_ZtlSecureTear_ nBulletCashItemID[2];
		_ZtlSecureTear_ nBulletCashItemID_CS;
		_ZtlSecureTear_ nMoveEndingPosX[2];
		_ZtlSecureTear_ nMoveEndingPosX_CS;
		_ZtlSecureTear_ nMoveEndingPosY[2];
		_ZtlSecureTear_ nMoveEndingPosY_CS;
		_ZtlSecureTear_ bMoveLeft[2];
		_ZtlSecureTear_ bMoveLeft_CS;
	};

	/*
	00000000 CMob::HITEFFECT struc ; (sizeof=0x1C, align=0x4, copyof_2207)
	00000000 tHit            dd ?
	00000004 nSkillID        dd ?
	00000008 bLeft           dd ?
	0000000C bSfx            dd ?
	00000010 sHitUOL         Ztl_bstr_t ?
	00000014 ptRel           tagPOINT ?
	0000001C CMob::HITEFFECT ends
	*/
	struct HITEFFECT
	{
		int tHit;
		int nSkillID;
		bool bLeft;
		bool bSfx;
		Ztl_bstr_t sHitUOL;
		POINT ptRel;
	};

	/*
	00000000 CMob::DROPPICKUP struc ; (sizeof=0x8, align=0x4, copyof_2212)
	00000000 dwDropID        dd ?
	00000004 tLastTry        dd ?
	00000008 CMob::DROPPICKUP ends
	*/
	struct DROPPICKUP
	{
		unsigned long dwDropID;
		int tLastTry;
	};

	int m_nMobChargeCount;
	bool m_bAttackReady;
	int m_nAngerGaugeCount;
	int m_nUpdateTime;
	int m_nCurrIndicatorIndex;
	bool m_bFullChargeEffectTime;
	bool m_bFullChargeEffectStartTime;
	ATTACKEFFECT m_effectAttack;
	ZList<AFFECTEDSKILLENTRY> m_lAffectedSkillEntry;
	ZList<ATTACKENTRY> m_lAttackEntry;
	//m_lpLayerASAni
	//m_lpLayerASIcon
	void* m_posAffectedGuidedBullet;
	//m_pvc
	//m_pvcActive
	//m_pvcHead
	_ZtlSecureTear_ m_bInViewSplit[2];
	_ZtlSecureTear_ m_bInViewSplit_CS;
	_ZtlSecureTear_ m_nMobCtrlState[2];
	_ZtlSecureTear_ m_nMobCtrlState_CS;
	_ZtlSecureTear_ m_nMobCtrlSN[2];
	_ZtlSecureTear_ m_nMobCtrlSN_CS;
	int m_nSkillCommand;
	int m_nSLV;
	int m_nSummonType;
	int m_tSummonEffect;
	int m_tDoomEffectEnd;
	_ZtlSecureTear_ m_tLastApplyCtrl[2];
	_ZtlSecureTear_ m_tLastApplyCtrl_CS;
	_ZtlSecureTear_ m_tLastTryPickUpDrop[2];
	_ZtlSecureTear_ m_tLastTryPickUpDrop_CS;
	int m_tLastAreaAttack;
	bool m_bDoFirstAttack;
	unsigned int m_uLayerStateCounter;
	_ZtlSecureTear_ m_dwMobID[2];
	_ZtlSecureTear_ m_dwMobID_CS;
	void* m_pTemplate;
	void* m_pTemplateByDoom;
	_ZtlSecureTear_ m_nMP[2];
	_ZtlSecureTear_ m_nMP_CS;
	MobStat m_stat;
	RANGE m_rgHorz;
	int m_nTeamForMCarnival;
	int m_nPhase;
	int m_nPhase;
	_ZtlSecureTear_ m_nMoveAction[2];
	_ZtlSecureTear_ m_nMoveAction_CS;
	_ZtlSecureTear_ m_nOneTimeAction[2];
	_ZtlSecureTear_ m_nOneTimeAction_CS;
	_ZtlSecureTear_ m_tHitExpire[2];
	_ZtlSecureTear_ m_tHitExpire_CS;
	_ZtlSecureTear_ m_tLastHitExpire[2];
	_ZtlSecureTear_ m_tLastHitExpire_CS;
	void* m_posFrame;
	_ZtlSecureTear_ m_tCurFrameRemain[2];
	_ZtlSecureTear_ m_tCurFrameRemain_CS;
	_ZtlSecureTear_ m_tNextFramesRemain[2];
	_ZtlSecureTear_ m_tNextFramesRemain_CS;
	_ZtlSecureTear_ m_tActionDelay[2];
	_ZtlSecureTear_ m_tActionDelay_CS;
	RECT m_rcBody;
	RECT m_rcBodyFlip;
	ZArray<RECT> m_arcMultiBody;
	ZArray<RECT> m_arcMultiBodyFlip;
	ZArray<RECT> m_arcAttackBody;
	ZArray<RECT> m_arcAttackBodyFlip;
	ZArray<ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>> m_aAction;
	_ZtlSecureTear_ m_tInitDelay[2];
	_ZtlSecureTear_ m_tInitDelay_CS;
	_ZtlSecureTear_ m_nDeadType[2];
	_ZtlSecureTear_ m_nDeadType_CS;
	_ZtlSecureTear_ m_nSuspended[2];
	_ZtlSecureTear_ m_nSuspended_CS;
	int m_tLastPoisonDamage;
	int m_tLastVenomDamage;
	int m_tLastAmbushDamage;
	int m_tLastObstacleDamage;
	int m_tLastHitByMob;
	int m_tLastHitDazzledMob;
	ZList<unsigned long> m_ldwRevive;
	ZList<DAMAGEINFO> m_lDamageInfo;
	ZList<HITEFFECT> m_lHitEffect;
	ZList<DROPPICKUP> m_lDropPickUpLog;
	//m_pLayerAction
	int m_nCalcDamageStatIndex;
	//m_pLayerHPTag
	//m_pEffectLayer
	//m_pLayerAngerTag
	bool m_bNeedToUpdateCrc;
	unsigned long m_dwMobCrc;
	int m_tLastHitted;
	//m_pCanvasHPIndicator
	ZMap<long, long, long> m_mDelayedHPIndicator;
	ZArray<long> m_pCanvasAngerIndicatorArrayCount;
	//m_pCanvasAngerIndicatorArray
	int m_nGaugeCount;
	ZRef<CAttrShoe> m_pAttrShoe;
	SECPOINT m_ptPos;
	SECPOINT m_ptPosPrev;
	int m_nHPpercentage;
	bool m_bWaitingToBeSetTossed;
	ZArray<tagPOINT> m_aMultiTargetForBall;
	ZArray<long> m_aRandTimeforAreaAttack;
	DelaySkill m_delaySkill;
	bool m_bDoomReserved;
	bool m_bDoomReservedSN;
	int Unknown1;
	ZList<ZRef<ReservedPacket>> m_lpStatChangeReserved;
	TSecType<int> m_bChasing;
	int m_tTimeBomb;
	unsigned long m_dwSwallowCharacterID;
	unsigned long m_dwTargetMobID;
	int m_tEscortStopActTime;
	int m_nEscortStopAct;
	int m_nDamagedByMobHPBarState;
	int m_nRushAttackIdx;
	int m_tRushAttackEnd;
	MobBullet::Container m_Bullets;
};