#pragma once

template <class T> 
class TSingleton
{
    public:
        static T* ms_pInstance;
};