#include "Fizik.h"
#include <iostream>
#include <stdlib.h>
#include "Ders.h"

using namespace std;

Fizik::Fizik(int dersId, std::string isim) : Ders(dersId, isim)
{
	cout << "Fizik Dersi Olusturuldu" << endl;
}

Fizik::~Fizik()
{}

void Fizik::derseBasla()
{	Ders::derseBasla();
	cout << "Fizik Dersi Basladi" << endl;
}