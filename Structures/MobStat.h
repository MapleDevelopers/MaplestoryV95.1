#pragma once

/*
00000000 MobStat         struc ; (sizeof=0x238, align=0x8, copyof_1875)
00000000 nLevel          dd ?
00000004 aDamagedElemAttr dd 8 dup(?)
00000024 nPAD            dd ?
00000028 nPAD_           dd ?
0000002C rPAD_           dd ?
00000030 tPAD_           dd ?
00000034 nPDR            dd ?
00000038 nPDR_           dd ?
0000003C rPDR_           dd ?
00000040 tPDR_           dd ?
00000044 nMAD            dd ?
00000048 nMAD_           dd ?
0000004C rMAD_           dd ?
00000050 tMAD_           dd ?
00000054 nMDR            dd ?
00000058 nMDR_           dd ?
0000005C rMDR_           dd ?
00000060 tMDR_           dd ?
00000064 nACC            dd ?
00000068 nACC_           dd ?
0000006C rACC_           dd ?
00000070 tACC_           dd ?
00000074 nEVA            dd ?
00000078 nEVA_           dd ?
0000007C rEVA_           dd ?
00000080 tEVA_           dd ?
00000084 nSpeed          dd ?
00000088 nSpeed_         dd ?
0000008C rSpeed_         dd ?
00000090 tSpeed_         dd ?
00000094 nStun_          dd ?
00000098 rStun_          dd ?
0000009C tStun_          dd ?
000000A0 nFreeze_        dd ?
000000A4 rFreeze_        dd ?
000000A8 tFreeze_        dd ?
000000AC nPoison_        dd ?
000000B0 rPoison_        dd ?
000000B4 tPoison_        dd ?
000000B8 wPoison_        dd ?
000000BC nSeal_          dd ?
000000C0 rSeal_          dd ?
000000C4 tSeal_          dd ?
000000C8 nDarkness_      dd ?
000000CC rDarkness_      dd ?
000000D0 tDarkness_      dd ?
000000D4 nPowerUp_       dd ?
000000D8 rPowerUp_       dd ?
000000DC tPowerUp_       dd ?
000000E0 nMagicUp_       dd ?
000000E4 rMagicUp_       dd ?
000000E8 tMagicUp_       dd ?
000000EC nPGuardUp_      dd ?
000000F0 rPGuardUp_      dd ?
000000F4 tPGuardUp_      dd ?
000000F8 nMGuardUp_      dd ?
000000FC rMGuardUp_      dd ?
00000100 tMGuardUp_      dd ?
00000104 nDoom_          dd ?
00000108 rDoom_          dd ?
0000010C tDoom_          dd ?
00000110 nWeb_           dd ?
00000114 rWeb_           dd ?
00000118 tWeb_           dd ?
0000011C wWeb_           dd ?
00000120 nPImmune_       dd ?
00000124 rPImmune_       dd ?
00000128 tPImmune_       dd ?
0000012C nMImmune_       dd ?
00000130 rMImmune_       dd ?
00000134 tMImmune_       dd ?
00000138 nShowdown_      dd ?
0000013C rShowdown_      dd ?
00000140 tShowdown_      dd ?
00000144 nHardSkin_      dd ?
00000148 rHardSkin_      dd ?
0000014C tHardSkin_      dd ?
00000150 nAmbush_        dd ?
00000154 rAmbush_        dd ?
00000158 tAmbush_        dd ?
0000015C wAmbush_        dd ?
00000160 nVenom_         dd ?
00000164 rVenom_         dd ?
00000168 tVenom_         dd ?
0000016C wVenom_         dd ?
00000170 nBlind_         dd ?
00000174 rBlind_         dd ?
00000178 tBlind_         dd ?
0000017C nSealSkill_     dd ?
00000180 rSealSkill_     dd ?
00000184 tSealSkill_     dd ?
00000188 nDazzle_        dd ?
0000018C rDazzle_        dd ?
00000190 tDazzle_        dd ?
00000194 nRiseByToss_    dd ?
00000198 rRiseByToss_    dd ?
0000019C tRiseByToss_    dd ?
000001A0 nPCounter_      dd ?
000001A4 rPCounter_      dd ?
000001A8 tPCounter_      dd ?
000001AC wPCounter_      dd ?
000001B0 nMCounter_      dd ?
000001B4 rMCounter_      dd ?
000001B8 tMCounter_      dd ?
000001BC wMCounter_      dd ?
000001C0 nCounterProb_   dd ?
000001C4 nBodyPressure_  dd ?
000001C8 rBodyPressure_  dd ?
000001CC tBodyPressure_  dd ?
000001D0 nWeakness_      dd ?
000001D4 rWeakness_      dd ?
000001D8 tWeakness_      dd ?
000001DC nTimeBomb_      dd ?
000001E0 rTimeBomb_      dd ?
000001E4 tTimeBomb_      dd ?
000001E8 wTimeBomb_      dd ?
000001EC nMagicCrash_    dd ?
000001F0 rMagicCrash_    dd ?
000001F4 tMagicCrash_    dd ?
000001F8 nDamagedElemAttr_ dd ?
000001FC rDamagedElemAttr_ dd ?
00000200 tDamagedElemAttr_ dd ?
00000204 nHealByDamage_  dd ?
00000208 rHealByDamage_  dd ?
0000020C tHealByDamage_  dd ?
00000210 nFs             dq ?
00000218 bInvincible     dd ?
0000021C bDisable        dd ?
00000220 bCannotEvade    dd ?
00000224 lBurnedInfo     ZList<MobStat::BURNED_INFO> ?
00000238 MobStat         ends
*/
struct MobStat
{
	/*
	00000000 MobStat::BURNED_INFO struc; (sizeof = 0x20, align = 0x4, copyof_1870)
	00000000 dwCharacterID   dd ?
	00000004 nSkillID        dd ?
	00000008 nDamage         dd ?
	0000000C tInterval       dd ?
	00000010 tEnd            dd ?
	00000014 tLastUpdate     dd ?
	00000018 nAttrRate       dd ?
	0000001C nDotCount       dd ?
	00000020 MobStat::BURNED_INFO ends
	*/
	struct BURNED_INFO
	{
		unsigned long dwCharacterID;
		int nSkillID;
		int tInterval;
		int tEnd;
		int tLastUpdate;
		int nAttrRate;
		int nDotCount;
	};

	int nLevel;
	int aDamagedElemAttr[8];
	int nPAD;
	int nPAD_;
	int rPAD_;
	int tPAD_;
	int nPDD;
	int nPDD_;
	int rPDD_;
	int tPDD_;
	int nMAD;
	int nMAD_;
	int rMAD_;
	int tMAD_;
	int nMDD;
	int nMDD_;
	int rMDD_;
	int tMDD_;
	int nACC;
	int nACC_;
	int rACC_;
	int tACC_;
	int nEVA;
	int nEVA_;
	int rEVA_;
	int tEVA_;
	int nSpeed;
	int nSpeed_;
	int rSpeed_;
	int tSpeed_;
	int nStun_;
	int rStun_;
	int tStun_;
	int nFreeze_;
	int rFreeze_;
	int tFreeze_;
	int nPoison_;
	int rPoison_;
	int tPoison_;
	unsigned int wPoison_;
	int nSeal_;
	int rSeal_;
	int tSeal_;
	int nDarkness_;
	int rDarkness_;
	int tDarkness_;
	int nPowerUp_;
	int rPowerUp_;
	int tPowerUp_;
	int nMagicUp_;
	int rMagicUp_;
	int tMagicUp_;
	int nPGuardUp_;
	int rPGuardUp_;
	int tPGuardUp_;
	int nMGuardUp_;
	int rMGuardUp_;
	int tMGuardUp_;
	int nDoom_;
	int rDoom_;
	int tDoom_;
	int nWeb_;
	int rWeb_;
	int tWeb_;
	unsigned int wWeb_;
	int nPImmune_;
	int rPImmune_;
	int tPImmune_;
	int nMImmune_;
	int rMImmune_;
	int tMImmune_;
	int nShowdown_;
	int rShowdown_;
	int tShowdown_;
	int nHardSkin_;
	int rHardSkin_;
	int tHardSkin_;
	int nAmbush_;
	int rAmbush_;
	int tAmbush_;
	unsigned int wAmbush_;
	int nVenom_;
	int rVenom_;
	int tVenom_;
	unsigned int wVenom_;
	int nBlind_;
	int rBlind_;
	int tBlind_;
	int nSealSkill_;
	int rSealSkill_;
	int tSealSkill_;
	int nDazzle_;
	int rDazzle_;
	int tDazzle_;
	int nRiseByToss_;
	int rRiseByToss_;
	int tRiseByToss_;
	int nPCounter_;
	int rPCounter_;
	int tPCounter_;
	unsigned int wPCounter_;
	int nMCounter_;
	int rMCounter_;
	int tMCounter_;
	unsigned int wMCounter_;
	int nCounterProb_;
	int nBodyPressure_;
	int rBodyPressure_;
	int tBodyPressure_;
	int nWeakness_;
	int rWeakness_;
	int tWeakness_;
	int nTimeBomb_;
	int rTimeBomb_;
	int tTimeBomb_;
	unsigned int wTimeBomb_;
	int nMagicCrash_;
	int rMagicCrash_;
	int tMagicCrash_;
	int nDamagedElemAttr_;
	int rDamagedElemAttr_;
	int tDamagedElemAttr_;
	int nHealByDamage_;
	int rHealByDamage_;
	int tHealByDamage_;
	long double nFs;
	bool bInvincible;
	bool bDisable;
	bool bCannotEvade;
	ZList<MobStat::BURNED_INFO> lBurnedInfo;
};