#pragma once
class Date1
{
private:
	unsigned int year_;
	unsigned int month_;
	unsigned int day_;
public:
	void InitializeByNumbers();
	void InitializeByString();
	void InitializeByDate(Date1& date);

	void AddDays(int&);
	void DeleteDays(int&);
	void IsLeapYear();

	bool CheckValid(unsigned int day, unsigned int month, unsigned int year);

	unsigned int GetYear();
	unsigned int GetMonth();
	unsigned int GetDay();

	void SetYear(unsigned int);
	void SetMonth(unsigned int);
	void SetDay(unsigned int);
	unsigned int GetDaysCount(Date1&);

	void Comparsion(Date1&);
	void GetDaysCountBetweenDate(Date1&);
};

inline unsigned int  Date1::GetYear() {
	return year_;
}
inline unsigned int  Date1::GetMonth() {
	return month_;
}
inline unsigned int  Date1::GetDay() {
	return day_;
}

