#pragma once
class Date2
{
private:
	unsigned int hour_;
	unsigned int minute_;
	unsigned int second_;
public:
	void InitializeByNumbers();
	void InitializeByString();
	void InitializeBySeconds();
	void InitializeByDate(Date2& date);

	void AddSeconds(int&);
	void DeleteSeconds(int&);

	bool CheckValid(unsigned int hour, unsigned int minute, unsigned int second);

	unsigned int GetHour();
	unsigned int GetMinute();
	unsigned int GetSecond();

	void SetHour(unsigned int);
	void SetMinute(unsigned int);
	void SetSecond(unsigned int);

	unsigned int GetDateInSeconds();
	unsigned int GetDateInMinutes();
	void Comparsion(Date2&);
	void GetSecondsCountBetweenDate(Date2&);
};
inline unsigned int Date2::GetHour() {
	return hour_;
}
inline unsigned int Date2::GetMinute() {
	return minute_;
}
inline unsigned int Date2::GetSecond() {
	return second_;
}

