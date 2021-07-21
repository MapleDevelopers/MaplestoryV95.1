#pragma once

/*
00000000 IVecCtrlOwnerVtbl struc; (sizeof = 0x24, align = 0x4, copyof_1989)
00000000 GetType         dd ? ; offset
00000004 gap4            db 4 dup(? )
00000008 OnLayerZChanged dd ? ; offset
0000000C GetShoeAttr     dd ? ; offset
00000010 GetPos          dd ? ; offset
00000014 GetPosPrev      dd ? ; offset
00000018 GetZMass        dd ? ; offset
0000001C GetRTTI         dd ? ; offset
00000020 IsKindOf        dd ? ; offset
00000024 IVecCtrlOwnerVtbl ends
*/
struct IVecCtrlOwnerVtbl
{
	void* GetType;
	int gap4[4];
	void* OnLayerZChanged;
	void* GetShoeAttr;
	void* GetPos;
	void* GetPosPrev;
	void* GetZMass;
	void* GetRTTI;
	void* IsKindOf;
};