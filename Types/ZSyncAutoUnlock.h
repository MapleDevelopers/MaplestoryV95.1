#pragma once

template <typename ZFatalSection>
class ZSyncAutoUnlock 
{
public:
    ZSyncAutoUnlock(ZFatalSection* lock) : m_pLock(lock) 
    {
    }

    ~ZSyncAutoUnlock()
    {
        if (m_pLock)
        {
            if (--m_pLock->_m_nRef == 1) 
            {
                m_pLock->_m_pTIB = 0;
            }
        }
    }
private:
    ZFatalSection* m_pLock;
};