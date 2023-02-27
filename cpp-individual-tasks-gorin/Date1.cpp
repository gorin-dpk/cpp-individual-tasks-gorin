#include "Date1.h"
#include <iostream>
#include <regex>
using namespace std;

void Date1::SetYear(unsigned int value) {
	year_ = value;
}
void Date1::SetMonth(unsigned int value) {
	month_ = value;
}
void Date1::SetDay(unsigned int value) {
	day_ = value;
}

unsigned int Date1::GetDaysCount(Date1& date)
{
	int a = (14 - date.GetMonth()) / 12;
	int y = date.GetYear() + 4800 - a;
	int m = date.GetMonth() + 12 * a - 3;

	return date.GetDay() + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;
}

void Date1::Comparsion(Date1& dateToComparsion)
{
	if (dateToComparsion.GetDay() <= day_ && dateToComparsion.GetMonth() <= month_ && dateToComparsion.GetYear() < year_)
		cout << "Первая дата была до второй" << endl;
	else if (dateToComparsion.GetDay() == day_ && dateToComparsion.GetMonth() == month_ && dateToComparsion.GetYear() == year_)
		cout << "Первая дата равна второй" << endl;
	else
		cout << "Первая дата была после второй" << endl;
}

void Date1::GetDaysCountBetweenDate(Date1& SecondDate)
{
	if (SecondDate.GetDay() <= day_ && SecondDate.GetMonth() <= month_ && SecondDate.GetYear() < year_) {
		int SecondDateDays = GetDaysCount(SecondDate);
		int FirstDateDays = GetDaysCount(*this);
		cout << "Количество дней между первой и второй датой = " << FirstDateDays - SecondDateDays << endl;
	}
	else {
		cout << "Первая дата меньше чем вторая, вычисление невозможно" << endl;
	}
}

void Date1::InitializeByNumbers()
{
	int day, month, year;
	cout << "Day: " && cin >> day;
	cout << "Month: " && cin >> month;
	cout << "Year: " && cin >> year;
	cout << endl;

	if (CheckValid(day, month, year)) {
		SetDay(day);
		SetMonth(month);
		SetYear(year);
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date1::InitializeByString()
{
	string date;
	int day, month, year;
	cout << "YYYY-MM-DD: " && cin >> date;
	regex rx("\\d{4}[-]\\d{2}[-]\\d{2}");
	if (regex_match(date, rx)) {
		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 7));
		day = stoi(date.substr(8, 10));

		SetDay(day);
		SetMonth(month);
		SetYear(year);
	}
	else {
		cout << "Дата имела неверный формат" << endl;
		cin.clear();
	}
}

void Date1::InitializeByDate(Date1& date)
{
	SetDay(date.GetDay());
	SetMonth(date.GetMonth());
	SetYear(date.GetYear());
}

void Date1::AddDays(int& addDays)
{
	if (addDays > 0) {
		int day = GetDay();
		int month = GetMonth();
		int year = GetYear();
		for (int i = 0; i < addDays;i++) {

			if (++day > 31) {
				day = 1;
				month++;
			}

			if (month > 12) {
				month = 1;
				year++;
			}
		}
		SetDay(day);
		SetMonth(month);
		SetYear(year);
		if (day < 9)
			cout << year << '-' << month << '-' << '0' << day << endl;
		else if (month < 9)
			cout << year << '-' << '0' << month << '-' << day << endl;
		else if (month < 9 && day < 9)
			cout << year << '-' << '0' << month << '-' << '0' << day << endl;
		else
			cout << year << '-' << month << '-' << day << endl;
	}
	else {
		cout << "Дни не могут быть отрицательными" << endl;
		return;
	}
}

void Date1::DeleteDays(int& deleteDays)
{
	if (deleteDays > 0) {
		int day = GetDay();
		int month = GetMonth();
		int year = GetYear();
		for (int i = 0; i < deleteDays;i++) {

			if (--day == 0) {
				day = 31;
				month--;
			}

			if (month == 0) {
				month = 12;
				year--;
			}
		}
		SetDay(day);
		SetMonth(month);
		SetYear(year);
		if (day < 9)
			cout << year << '-' << month << '-' << '0' << day << endl;
		else if (month < 9)
			cout << year << '-' << '0' << month << '-' << day << endl;
		else if (month < 9 && day < 9)
			cout << year << '-' << '0' << month << '-' << '0' << day << endl;
		else
			cout << year << '-' << month << '-' << day << endl;
	}
	else {
		cout << "Дни не могут быть отрицательными" << endl;
		return;
	}
}

void Date1::IsLeapYear()
{
	if (this->year_ % 4 == 0) {
		cout << this->year_ << " високосный" << endl;
	}
	else {
		cout << this->year_ << " не високосный" << endl;
	}
}

bool Date1::CheckValid(unsigned int day, unsigned int month, unsigned int year) {
	if (day > 31 || day == 0 || month > 12 || month == 0 ) {
		return false;
	}
	else {
		return true;
	}
}
