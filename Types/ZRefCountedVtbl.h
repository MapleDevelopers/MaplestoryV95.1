#pragma once

/*
__vecDelDtor = 'vector deleting destructor' represents the destructor agent of the object array; the corresponding delete[] A
void vector_deleting_destructor(A* pa, size_t count)
{
	for (size_t i = 0; i < count; ++i)
		pa[i].~A();
	A::operator delete[](pa);
}
*/ 

/*
00000000 ZRefCountedVtbl struc; (sizeof = 0x4, align = 0x4, copyof_1416)
00000000 __vecDelDtor    dd ? ; offset
00000004 ZRefCountedVtbl ends
*/
struct ZRefCountedVtbl
{
	void* __vecDelDtor;
};

//ItemSlotBase related Vtbl
//struct ZRefCountedVtbl
//{
	//Padding(0x08);
	//unsigned int(__thiscall* get_item_count_1)(void* ecx); //+ 0x08
	//Padding(0x3C);
	//unsigned int(__thiscall* get_item_count_2)(void* ecx); //+ 0x48
//};