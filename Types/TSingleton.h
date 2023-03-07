#pragma once

template<typename T>
class TSingleton
{
public:
    static T* ms_pInstance;
};

template<typename T>
T* TSingleton<T>::ms_pInstance = nullptr;