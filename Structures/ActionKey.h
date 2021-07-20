#pragma once

/*
00000000 ActionKey       struc; (sizeof = 0xC, align = 0x4, copyof_3768)
00000000 nSkillID        dd ?
00000004 nSLV            dd ?
00000008 nAction         dd ?
0000000C ActionKey       ends
*/
struct ActionKey
{
	int nSkillID;
	int nSLV;
	int nAction;
};