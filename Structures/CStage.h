#pragma once
#include "../Types/ZrefCounted.h"
#include "../Types/IGObj.h"

//00000000 CStage          
//00000000 baseclass_0     IGObj ?
//00000004 baseclass_4     IUIMsgHandler ?
//00000008 baseclass_8     INetMsgHandler ?
//0000000C baseclass_c     ZRefCounted ?
//00000018 CStage          ends

// struc; (sizeof = 0x18, align = 0x4, copyof_3252)
// XREF: CMapLoadable
struct CStage {
	IGObj game_object_interface;
	IUIMsgHandler ui_msg_handler_interface;
	INetMsgHandler net_msg_handler_interface;
	ZRefCounted counted_reference;
};