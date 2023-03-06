template<typename T>
class ZAllocEx
{
public:
	T m_lock;
    DWORD* m_apBlockHead[4];
    DWORD* m_apBuff[4];
}