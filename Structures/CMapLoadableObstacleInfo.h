#pragma once
#include "../Structures/Rect.h"
#include "../Structures/Point.h"
#include "../Structures/CMapLoadableObstacle.h"

/*
00000000 CMapLoadable::OBSTACLE_INFO struc; (sizeof = 0x1C, align = 0x4, copyof_3667)
00000000 rcObs           tagRECT ?
00000010 vecForce        tagPOINT ?
00000018 pObstacle       dd ?
0000001C CMapLoadable::OBSTACLE_INFO ends
*/

struct OBSTACLE_INFO
{
	RECT rcObs;
	POINT vecForce;
	OBSTACLE* pObstacle
};