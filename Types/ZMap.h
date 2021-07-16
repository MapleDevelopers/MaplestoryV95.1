#pragma once

template <class key_type, class value_type, class pair_type = key_type>
class ZMap
{
	struct PAIR
	{
		private:
			unsigned int padding_; // vfptr

		public:
			PAIR* pNext_;
			key_type key_;
			value_type value_;
	};

   //ZMap<key_type, value_type, pair_type>Vtbl* vfptr;
	PAIR** _m_apTable;
	unsigned int _m_uTableSize;
	unsigned int _m_uCount;
	unsigned int _m_uAutoGrowEvery128;
	unsigned int _m_uAutoGrowLimit;

	template <typename T>
	unsigned int get_hash(const T& key) const
	{
		static_assert(std::is_integral<key_type>::value, "This func can only calculate the hash for integral types");

		return _rotr(key, 5);
	};

public:
	virtual ~ZMap() = default;

	unsigned int count() const
	{
		return _m_uCount;
	}
}