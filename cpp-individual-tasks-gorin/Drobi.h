#pragma once
class Drobi
{
protected:
	long first;
	unsigned short second;
public:
	long GetFirst();
	unsigned short GetSecond();

	void SetFirst(long);
	void SetSecond(unsigned short);

	bool Read(const char* txt);
	void Add(Drobi&);
	void Sub(Drobi&);
	void Mul(Drobi&);
	void Comparison(Drobi&);
};

inline long Drobi::GetFirst() {
	return first;
}
inline unsigned short Drobi::GetSecond() {
	return second;
}



