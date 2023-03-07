#pragma once

template<typename T>
class ZRef
{
public:
    T* p;

    ZRef() : p(nullptr) {}
    ZRef(T* ptr) : p(ptr) {}
    ZRef(const ZRef<T>& other) : p(other.p) {}

    ZRef<T>& operator=(const ZRef<T>& other)
    {
        if (this != &other) 
        {
            p = other.p;
        }
        return *this;
    }

    T& operator*() const { return *p; }
    T* operator->() const { return p; }

    bool operator==(const ZRef<T>& other) const { return p == other.p; }
    bool operator!=(const ZRef<T>& other) const { return !operator==(other); }

    bool operator==(const T* ptr) const { return p == ptr; }
    bool operator!=(const T* ptr) const { return !operator==(ptr); }

    void Release() { p = nullptr; }
    void Attach(T* ptr) { p = ptr; }
    T* Detach() { T* ptr = p; p = nullptr; return ptr; }

    static void _ReleaseRaw(ZRef<T>* ref, int nType)
    {
        if (ref->p) 
        {
            ref->p->Release(nType);
        }
    }

    ~ZRef()
    {
        if (p)
        {
            p->Release(0);
            p = nullptr;
        }
    }
};