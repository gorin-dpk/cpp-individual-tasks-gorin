#pragma once
class Bankomat
{
private:
	unsigned int BankomatID;
	unsigned int RemainingMoney;
	unsigned int MinMoney = 500;
	unsigned int MaxMoney = 50000;
	unsigned int Money500;
	unsigned int Money1000;
	unsigned int Money2000;
	unsigned int Money5000;
public:
	Bankomat(unsigned int);
	void NumberOfBanknotes(unsigned int, unsigned int, unsigned int, unsigned int);
	void WithdrawMoney(unsigned int);
	void Init(unsigned int);
	void Display();
};

inline Bankomat::Bankomat(unsigned int thisBankomatID = 0)
{
	Init(thisBankomatID);
}

