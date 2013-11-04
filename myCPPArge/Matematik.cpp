#include "Matematik.h"
#include <iostream>
#include <stdlib.h>
#include "Ders.h"

using namespace std;

Matematik::Matematik(int dersId, std::string isim) : Ders(dersId, isim)
{
	cout << "Matematik Dersi Olusturuldu" << endl;
}

Matematik::~Matematik()
{}

//overriden
void Matematik::derseBasla()
{
	Ders::derseBasla();
	cout << "Matematik Dersi Basladi" << endl;
}