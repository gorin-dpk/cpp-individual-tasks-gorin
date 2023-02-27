#pragma once
class Payment
{
private:
	char FIO_[60];
	float Oklad_;
	int AcceptYear_;
	float AddProcent_;
	float Tax_;
	int DaysWorked_;
	float DaysAll_;
	float NachSum_;
	float UderSumm_;
	float Stag_;
	float ZP_;

public:
	void Init();

	void NachSum();
	void UderSum();
	void ZP();
	void Stag();

	void SetStag(float);
	void SetZP(float);
	void SetNachSum(float);
	void SetUderSum(float);

	float GetStag();
	float GetZP();
	float GetNachSum();
	float GetUderSum();
};

inline float Payment::GetStag() {
	return Stag_;
}
inline float Payment::GetZP() {
	return ZP_;
}
inline float Payment::GetNachSum() {
	return NachSum_;
}
inline float Payment::GetUderSum() {
	return UderSumm_;
}

