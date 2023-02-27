#include "Date2.h"
#include <iostream>
#include <regex>
using namespace std;

void Date2::SetHour(unsigned int value) {
	hour_ = value;
}
void Date2::SetMinute(unsigned int value) {
	minute_ = value;
}
void Date2::SetSecond(unsigned int value) {
	second_ = value;
}

unsigned int Date2::GetDateInSeconds()
{
	return second_ + minute_ * 60 + hour_ * 3600;
}

unsigned int Date2::GetDateInMinutes()
{
	return second_ % 60 + minute_ + hour_ * 60;
}

void Date2::Comparsion(Date2& date2)
{
	int SecondDateSec = date2.GetDateInSeconds();
	int FirstDateSec = this->GetDateInSeconds();
	if (FirstDateSec > SecondDateSec) {
		cout << "Первая дата больше" << endl;
	}
	if (FirstDateSec == SecondDateSec) {
		cout << "Даты ровны" << endl;
	}
	else{
		cout << "Первая дата меньше" << endl;
	}
}

void Date2::GetSecondsCountBetweenDate(Date2& date2)
{
	int SecondDateSec = date2.GetDateInSeconds();
	int FirstDateSec = this->GetDateInSeconds();
	if (FirstDateSec > SecondDateSec) {
		cout << "Количество секунд между первой и второй датой = " << FirstDateSec - SecondDateSec << endl;
	}
	else {
		cout << "Первая дата меньше чем вторая, вычисление невозможно" << endl;
	}
}

void Date2::InitializeByNumbers()
{
	int hour, minute, second;
	cout << "Hour: " && cin >> hour;
	cout << "Minute: " && cin >> minute;
	cout << "Second: " && cin >> second;
	cout << endl;

	if (CheckValid(hour, minute, second)) {
		SetHour(hour);
		SetMinute(minute);
		SetSecond(second);
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date2::InitializeByString()
{
	string date;
	int hour, minute, second;
	cout << "HH:MM:SS: " && cin >> date;
	regex rx("\\d{4}[:]\\d{2}[:]\\d{2}");
	if (regex_match(date, rx)) {
		hour = stoi(date.substr(0, 2));
		minute = stoi(date.substr(3, 5));
		second = stoi(date.substr(6, 8));

		if (CheckValid(hour, minute, second)) {
			SetHour(hour);
			SetMinute(minute);
			SetSecond(second);
		}
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date2::InitializeBySeconds()
{
	int hour, minute, second = 0;
	cin >> second;
	minute = second / 60 % 60;
	hour = second / 60 / 60;
	cout << "Ваша дата: " << hour << ":" << minute << ":" << second % 60 << endl;

	if (CheckValid(hour, minute, second % 60)) {
		SetHour(hour);
		SetMinute(minute);
		SetSecond(second % 60);
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date2::InitializeByDate(Date2& date)
{
	SetHour(date.GetHour());
	SetMinute(date.GetHour());
	SetSecond(date.GetHour());
}

void Date2::AddSeconds(int& addSec)
{
	if (addSec > 0) {
		const int seconds_in_minute = 60,
			mintues_in_hour = 60,
			hours_in_day = 24;

		int hours = GetHour();
		int minutes = GetMinute();
		int seconds = GetSecond();

		seconds += addSec;
		minutes += seconds / seconds_in_minute;
		seconds %= seconds_in_minute;

		hours += minutes / mintues_in_hour;
		minutes %= mintues_in_hour;

		hours %= hours_in_day;

		cout << hours << ':' << minutes << ':' << seconds << endl;

		SetHour(hours);
		SetMinute(minutes);
		SetSecond(seconds);
	}
	else {
		cout << "Секунды не могут быть отрицательными" << endl;
		return;
	}
}

void Date2::DeleteSeconds(int& addSec)
{
	if (addSec > 0) {
		int hours = GetHour();
		int minutes = GetMinute();
		int seconds = GetSecond();
		for (int i = 0; i < addSec; i++)
		{
			if (seconds-- == 0) {
				seconds = 60;
				minutes--;
			}
			if (minutes == 0) {
				minutes = 60;
				hours--;
			}
			if (hours == 0) {
				break;
			}
		}

		cout << hours << ':' << minutes << ':' << seconds << endl;

		SetHour(hours);
		SetMinute(minutes);
		SetSecond(seconds);
	}
	else {
		cout << "Секунды не могут быть отрицательными" << endl;
		return;
	}
}

bool Date2::CheckValid(unsigned int hour, unsigned int minute, unsigned int second)
{
	if (hour < 24 || minute <= 60|| second <= 60) {
		return true;
	}
	else {
		return false;
	}
}
