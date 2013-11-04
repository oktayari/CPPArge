#pragma once
#include "DonmusGida.h"
class DonmusPiza :
	public DonmusGida
{

protected:
	int _cap;

public:
	DonmusPiza(int ucret, int miktar, int cap);
	virtual ~DonmusPiza();
	void BilgilerimiGoster();
	void Pisir();
	int GetCap();
};

