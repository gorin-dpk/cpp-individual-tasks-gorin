#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

void BankAccount::Init(const char* theLastName, int theNumberAccount, float theInterestAccrual, float theSumRub)
{
	if (!theLastName) {
		strcpy_s(LastName, "NOT");
	}
	else {
		strcpy_s(LastName, theLastName);
	}
	if (theNumberAccount < 0) {
		theNumberAccount *= -1;
	}
	NumberAccount = theNumberAccount;
	InterestAccrual = theInterestAccrual;
	SumRub = theSumRub;
}

void BankAccount::ReplaceName(const char* theLastName)
{
	strcpy_s(LastName, theLastName);
	cout << "Имя изменено на " << theLastName << endl;
}

void BankAccount::WithDraw(float theSumRub)
{
	if (theSumRub < 0.0f)
	{
		theSumRub *= -1.0f;
	}
	SumRub -= theSumRub;
	cout << "Списано " << theSumRub << " руб." << endl;
}

void BankAccount::Put(float theSumRub)
{
	if (theSumRub < 0.0f)
	{
		theSumRub *= -1.0f;
	}
	SumRub += theSumRub;
	cout << "Пополнение " << theSumRub << " руб." << endl;
}

void BankAccount::Credit()
{
	SumRub += InterestAccrual / 100.0f * SumRub;
}

float BankAccount::MoveIn(float curs)
{
	return SumRub / curs;
}

void BankAccount::FloatToStr(const char* str)
{
	double a, b;

	b = modf(SumRub, &a);
}

void BankAccount::Display()
{
	cout << endl << "Фамилия: " << LastName << endl << "Номер аккаунта: " << NumberAccount << endl << "Начисление процентов: " << InterestAccrual << endl << "Баланс: " << SumRub << endl << endl;
}
