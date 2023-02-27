#include "test.h"
#include <math.h>
#include <iostream>
#include <windows.h>
using namespace std;

double test::PowDI(double &a, int &b)
{
	return pow(a, b);
}

double test::PowDD(double &a, double &b)
{
	return pow(a, b);
}

void test::DoubleInt(int &a, int &b)
{
	a && b < 0 && b == 0 ? throw std::overflow_error("Делить на 0 нельзя!") : cout << a / b << endl;
}

void test::MoneyCounter(int& nominal, int& count)
{
	if (nominal && count >= 0)
	{
		int ArrayMoney[6]{ 50,100,500,1000,2000,5000 };
		for (int key : ArrayMoney)
			if (key == nominal)
			{
				cout << nominal * count << endl;
				break;
			}
			else
			{
				cout << "Такого номинала не существует" << endl;
				break;
			}
	}
	else
		cout << "Значения не могут быть отрицательными" << endl;
}

void test::PriceOfGood(double& goodPrice, int& count)
{
	goodPrice && count > 0 ? cout << goodPrice * count << endl : cout << "Значения не могут быть отрицательными" << endl;
}

void test::ProductСalories(int& calories, double& mass)
{
	calories && mass > 0 ? cout << calories * 100 / mass << endl : cout << "Значения не могут быть отрицательными" << endl;
}

bool test::IsNumberInRange(double& left, double& right, double& num)
{
	return (num > left && num < right) ? true : false;
}

bool test::IsNumberInRange2(int& left, int& right, int& num)
{
	return (num >= left && num < right) ? true : false;
}

void test::HoursToMinutes(int& hours, int& minutes)
{
	hours && minutes > 0 ? cout << hours * 60 + minutes << endl : cout << "Значения не могут быть отрицательными" << endl;
}

double test::DistXY(double& x, double& y)
{
	return sqrt(pow(0 - x, 2) + pow(0 - y, 2));
}

void test::Salary(double& oklad, int& days)
{
	oklad && days > 0 ? cout << oklad / 30 * days << endl : cout << "Значения не могут быть отрицательными" << endl;
}

void test::PhoneTalk(int& mins, double& price)
{
	mins && price > 0 ? cout << mins * price << endl : cout << "Значения не могут быть отрицательными" << endl;
}

double test::Multiply(double& first, double& second, double& num)
{
	double f, s, t;
	modf(first, &f);
	s = fabs(modf(second, &t));
	return ((s + f) * num);
}

void test::ChangePointerX(int& x)
{
	if (x > 0 && x <= GetSystemMetrics(SM_CXSCREEN))
		cout << "Значение по X изменено на " << x << endl;
	else
		cout << "Неверное значение, превыщающее границы." << endl;
}

void test::ChangePointerY(int& y)
{
	if (y > 0 && y <= GetSystemMetrics(SM_CYSCREEN))
		cout << "Значение по Y изменено на " << y << endl;
	else
		cout << "Неверное значение, превыщающее границы." << endl;
}

double test::Multiply2(int& first, int& second, int& num)
{
	double f, s, t;
	modf(first, &f);
	s = fabs(modf(second, &t));
	return ((second + f) * num);
}
