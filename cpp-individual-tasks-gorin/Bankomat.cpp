#include "Bankomat.h"
#include <iostream>

using namespace std;

void Bankomat::NumberOfBanknotes(unsigned int money500, unsigned int money1000, unsigned int money2000, unsigned int money5000)
{
	Money500 += money500;
	Money1000 += money1000;
	Money2000 += money2000;
	Money5000 += money5000;
	RemainingMoney = Money500 * 500 + Money1000 * 1000 + Money2000 * 2000 + Money5000 * 5000;
}

void Bankomat::WithdrawMoney(unsigned int money)
{
	if (money > MinMoney && money < MaxMoney && money < RemainingMoney)
		RemainingMoney -= money;
	else
		cout << "Ошибка операции" << endl;
}

void Bankomat::Init(unsigned int thisBankomatID)
{
	BankomatID = thisBankomatID;
}

void Bankomat::Display()
{
	cout << "Номер банкомата " << BankomatID << endl;
	cout << "Денег в банкомате " << RemainingMoney << endl;
}
