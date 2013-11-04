#include "Ogretmen.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


Ogretmen::Ogretmen()
{}
Ogretmen::Ogretmen(int kisiId, int sicilNo, std::string ad, std::string soyad) 
	:Kisi(kisiId, ad, soyad)
{
	cout << "Ogretmen::Ogretmen(int kisiId,int sicilNo, std::string ad, std::string soyad)" << endl;
	cout << ":Kisi(kisiId, ad, soyad), cagrildi" << endl;
	_sicilNo = sicilNo;

}

Ogretmen::~Ogretmen()
{}


void Ogretmen::bilgileriGoster()
{
	Kisi::bilgileriGoster();

	cout << "Ogretmen::bilgileriGoster() ,Cagrildi " << endl;
	cout << "Sicil No : " << _sicilNo << endl;
	cout << "====================== " << endl;

}

void Ogretmen::dersEkle(Ders * ders)
{
	dersler[dersIndex] = ders;
	dersIndex++;
}

void Ogretmen::dersleriGoster()
{
	cout << "Dersler" << endl;
	cout << "==========================" << endl;
	for (int i = 0; i < dersIndex; i++)
	{
		Ders *ders = dersler[i];
		ders->dersBilgileri();
		cout << "  " << endl;
	}

	cout <<"  " << endl;
}


void Ogretmen::ogrenciEkle(Ogrenci * ogrenci)
{
	ogrenciler[ogrenciIndex] = ogrenci;
	ogrenciIndex++;

}
void Ogretmen::ogrencileriGoster()
{
	cout << "Ogrenciler" << endl;
	cout << "==========================" << endl;
	for (int i = 0; i < ogrenciIndex; i++)
	{
		Ogrenci *ogrenci = ogrenciler[i];
		ogrenci->bilgileriGoster();
		cout << "  " << endl;
	}

	cout << "  " << endl;
}


void Ogretmen::derseBasla(int dersId)
{
	for (int i = 0; i < dersIndex; i++)
	{
		Ders *ders = dersler[i];

		if (ders->getDersId() == dersId){
			ders->derseBasla();
			return;
		}
	}
	
}