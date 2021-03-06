#pragma once
#include "ExtendSP.h"

/*
00000000 GW_CharacterStat struc; (sizeof = 0xF9, copyof_1764)
00000000 dwCharacterID   dd ?
00000004 sCharacterName  db 13 dup(? )
00000011 nGender         db ?
00000012 nSkin           db ?
00000013 nFace           dd ?
00000017 nHair           dd ?
0000001B aliPetLockerSN  _LARGE_INTEGER 3 dup(? )
00000033 _ZtlSecureTear_nLevel db 2 dup(? )
00000035 _ZtlSecureTear_nLevel_CS dd ?
00000039 _ZtlSecureTear_nJob dw 2 dup(? )
0000003D _ZtlSecureTear_nJob_CS dd ?
00000041 _ZtlSecureTear_nSTR dw 2 dup(? )
00000045 _ZtlSecureTear_nSTR_CS dd ?
00000049 _ZtlSecureTear_nDEX dw 2 dup(? )
0000004D _ZtlSecureTear_nDEX_CS dd ?
00000051 _ZtlSecureTear_nINT dw 2 dup(? )
00000055 _ZtlSecureTear_nINT_CS dd ?
00000059 _ZtlSecureTear_nLUK dw 2 dup(? )
0000005D _ZtlSecureTear_nLUK_CS dd ?
00000061 _ZtlSecureTear_nHP dd 2 dup(? )
00000069 _ZtlSecureTear_nHP_CS dd ?
0000006D _ZtlSecureTear_nMHP dd 2 dup(? )
00000075 _ZtlSecureTear_nMHP_CS dd ?
00000079 _ZtlSecureTear_nMP dd 2 dup(? )
00000081 _ZtlSecureTear_nMP_CS dd ?
00000085 _ZtlSecureTear_nMMP dd 2 dup(? )
0000008D _ZtlSecureTear_nMMP_CS dd ?
00000091 _ZtlSecureTear_nAP dw 2 dup(? )
00000095 _ZtlSecureTear_nAP_CS dd ?
00000099 _ZtlSecureTear_nSP dw 2 dup(? )
0000009D _ZtlSecureTear_nSP_CS dd ?
000000A1 _ZtlSecureTear_nEXP dd 2 dup(? )
000000A9 _ZtlSecureTear_nEXP_CS dd ?
000000AD _ZtlSecureTear_nPOP dw 2 dup(? )
000000B1 _ZtlSecureTear_nPOP_CS dd ?
000000B5 _ZtlSecureTear_nMoney dd 2 dup(? )
000000BD _ZtlSecureTear_nMoney_CS dd ?
000000C1 _ZtlSecureTear_nTempEXP dd 2 dup(? )
000000C9 _ZtlSecureTear_nTempEXP_CS dd ?
000000CD extendSP        ExtendSP ?
000000E1 _ZtlSecureTear_dwPosMap dd 2 dup(? )
000000E9 _ZtlSecureTear_dwPosMap_CS dd ?
000000ED nPortal         db ?
000000EE nCheckSum       dd ?
000000F2 nItemCountCheckSum db ?
000000F3 nPlaytime       dd ?
000000F7 nSubJob         dw ?
000000F9 GW_CharacterStat ends
*/
struct GW_CharacterStat
{
	unsigned int dwCharacterID;
	char sCharacterName[13];
	char nGender;
	char nSkin;
	int nFace;
	int nHair;
	LARGE_INTEGER liPetLockerSN[3];
	_ZtlSecureTear_ nLevel[2];
	_ZtlSecureTear_ nLevel_CS;
	_ZtlSecureTear_ nJob[2];
	_ZtlSecureTear_ nJob_CS;
	_ZtlSecureTear_ nSTR[2];
	_ZtlSecureTear_ nSTR_CS;
	_ZtlSecureTear_ nDEX[2];
	_ZtlSecureTear_ nDEX_CS;
	_ZtlSecureTear_ nINT[2];
	_ZtlSecureTear_ nINT_CS;
	_ZtlSecureTear_ nLUK[2];
	_ZtlSecureTear_ nLUK_CS;
	_ZtlSecureTear_ nHP[2];
	_ZtlSecureTear_ nHP_CS;
	_ZtlSecureTear_ nMHP[2];
	_ZtlSecureTear_ nMHP_CS;
	_ZtlSecureTear_ nMP[2];
	_ZtlSecureTear_ nMP_CS;
	_ZtlSecureTear_ nMMP[2];
	_ZtlSecureTear_ nMMP_CS;
	_ZtlSecureTear_ nAP[2];
	_ZtlSecureTear_ nAP_CS;
	_ZtlSecureTear_ nSP[2];
	_ZtlSecureTear_ nSP_CS;
	_ZtlSecureTear_ nEXP[2];
	_ZtlSecureTear_ nEXP_CS;
	_ZtlSecureTear_ nPOP[2];
	_ZtlSecureTear_ nPOP_CS;
	_ZtlSecureTear_ nMoney[2];
	_ZtlSecureTear_ nMoney_CS;
	_ZtlSecureTear_ nTempEXP[2];
	_ZtlSecureTear_ nTempEXP_CS;
	ExtendSP extendSP;
	_ZtlSecureTear_ dwPosMap[2];
	_ZtlSecureTear_ dwPosMap_CS;
	char nPortal;
	int nCheckSum;
	char nItemCountCheckSum;
};