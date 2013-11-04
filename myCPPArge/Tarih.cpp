#include "Tarih.h"
#include <iostream>
#include <stdlib.h>
#include "Ders.h"

using namespace std;

Tarih::Tarih(int dersId, std::string isim) : Ders(dersId, isim)
{
	cout << "Tarih Dersi Olusturuldu" << endl;
}

Tarih::~Tarih()
{}

void Tarih::derseBasla()
{
	Ders::derseBasla();
	cout << "Tarih Dersi Basladi" << endl;
}