#pragma once
#include "ZRefCounted.h"
#include "TSecType.h"

/*
00000000 CAttrShoe       struc ; (sizeof=0x90, align=0x4, copyof_1980)
00000000 baseclass_0     ZRefCounted ?
0000000C mass            TSecType<double> ?
00000018 walkAcc         TSecType<double> ?
00000024 walkSpeed       TSecType<double> ?
00000030 walkDrag        TSecType<double> ?
0000003C walkSlant       TSecType<double> ?
00000048 walkJump        TSecType<double> ?
00000054 swimAcc         TSecType<double> ?
00000060 swimSpeedH      TSecType<double> ?
0000006C swimSpeedV      TSecType<double> ?
00000078 flyAcc          TSecType<double> ?
00000084 flySpeed        TSecType<double> ?
00000090 CAttrShoe       ends
*/
class CAttrShoe : ZRefCounted
{
	TSecType<double> mass;
	TSecType<double> walkAcc;
	TSecType<double> walkSpeed;
	TSecType<double> walkDrag;
	TSecType<double> walkSlant;
	TSecType<double> walkJump;
	TSecType<double> swimAcc;
	TSecType<double> swimSpeedH;
	TSecType<double> swimSpeedV;
	TSecType<double> flyAcc;
	TSecType<double> flySpeed;
};