#include "DonmusPiza.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

DonmusPiza::DonmusPiza(int ucret, int miktar, int cap)
{
	_miktar = miktar;
	_ucret = ucret;
	_cap = cap;
}


DonmusPiza::~DonmusPiza()
{
}

int DonmusPiza::GetCap(){

	return _cap;
}
void DonmusPiza::Pisir()
{
	
	cout << "Firinda Pisiyorum !" << endl;
}
void DonmusPiza::BilgilerimiGoster()
{
	cout << " ==================================" << endl;
	cout << "Cap= " << _cap << endl;
	cout << "Ucret= " << this->GetUcret() << endl;
	cout << "Miktar= " << this->GetMiktar() << endl;
	cout << " ==================================" << endl;
	cout << "Toplam Ucret = " << GetToplamUcret() << endl;
	cout << " ==================================" << endl;
}