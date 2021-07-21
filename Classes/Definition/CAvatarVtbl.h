#pragma once

/*
00000000 CAvatarVtbl     struc; (sizeof = 0x18, align = 0x4, copyof_1994)
00000000 __vecDelDtor    dd ? ; offset
00000004 CanUseBareHand  dd ? ; offset
00000008 IsEvanJob       dd ? ; offset
0000000C OnAvatarModified dd ? ; offset
00000010 SetMoveAction   dd ? ; offset
00000014 PrepareActionLayer dd ? ; offset
00000018 CAvatarVtbl     ends
*/
class CAvatarVtbl
{
	void* __vecDelDtor;
	void* CanUseBareHand;
	void* IsEvanJob;
	void* OnAvatarModified;
	void* SetMoveAction;
	void* PrepareActionLayer;
};