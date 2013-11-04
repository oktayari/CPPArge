#include "Kisi.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


Kisi::Kisi(){}

Kisi::Kisi(int kisiId, string ad, string soyad)
{
	cout << "Kisi::Kisi(int kisiId, string adi, string soyadi), Cagrildi " << endl;

	_kisiId = kisiId;
	_ad = ad;
	_soyad = soyad;
}


Kisi::~Kisi()
{}

void Kisi::bilgileriGoster()
{
	cout << "Kisi::bilgileriGoster() cagrildi" << endl;
	cout << "Ortak Bilgiler " << endl;
	cout << "====================== " << endl;
	cout << "KisiId : " << _kisiId << endl;
	cout << "Ad : " << _ad << endl;
	cout << "Soyad : " << _soyad << endl;
	cout << "====================== " << endl;
	cout << " Ek Bilgiler " << endl;

}
