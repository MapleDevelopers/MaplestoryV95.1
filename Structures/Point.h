#pragma once

/*
00000000 tagPOINT        struc; (sizeof = 0x8, align = 0x4, copyof_1379)
00000000 x               dd ? 
00000004 y               dd ? 
00000008 tagPOINT        ends
*/
struct POINT // or a two-dimensional vector as understood by CMapLoadable::OBSTACLE_INFO->vecForce
{
	int x;
	int y;
};