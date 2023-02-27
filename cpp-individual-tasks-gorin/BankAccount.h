#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
	char LastName[60];
	int NumberAccount;
	float InterestAccrual;
	float SumRub;
public:
	BankAccount(const char*, int, float, float);
	void Init(const char*, int, float, float);
	void ReplaceName(const char*);
	void WithDraw(float);
	void Put(float);
	void Credit();
	float MoveIn(float);
	void FloatToStr(const char*);
	void Display();
};

inline BankAccount::BankAccount(const char* LastName = 0, int NumberAccount = 0, float InterestAccrual = 0, float SumRub = 0.0f)
{
	Init(LastName, NumberAccount, InterestAccrual, SumRub);
}

