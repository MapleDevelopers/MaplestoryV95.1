#pragma once
#include "ZXString.h"

struct PET_INFO 
{
    unsigned long dwTempletID;
    ZXString<char> sName;
    int nLevel;
    int nTameness;
    int bIsDead;
}