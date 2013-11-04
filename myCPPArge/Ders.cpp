#include "Ders.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Ders::Ders(int dersId, std::string isim)
{
	_dersId = dersId;
	_isim = isim;
}


int Ders::getDersId()
{
	return _dersId;
}

std::string Ders::getDersAdi()
{
	return _isim;
}

void Ders::dersBilgileri()
{
	cout << "Ders ID = " << _dersId << endl;
	cout << "Ders Adi = " << _isim << endl;

}

void Ders::derseBasla()
{
	cout << "Ders Basladi" << endl;
}


Ders::~Ders()
{
}
