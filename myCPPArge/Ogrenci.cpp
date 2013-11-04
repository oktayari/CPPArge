#include "Ogrenci.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Ogrenci::Ogrenci()
{}

Ogrenci::Ogrenci(int kisiId,int ogrenciNo, std::string ad, std::string soyad) :Kisi(kisiId, ad, soyad)
{
	cout << "Ogrenci::Ogrenci(int kisiId,int no, std::string ad, std::string soyad) " << endl;
	cout << ":Kisi(kisiId, ad, soyad), cagrildi" << endl;
	_ogrenciNo = ogrenciNo;
	
}

Ogrenci::~Ogrenci()
{}

void Ogrenci::bilgileriGoster() 
{
	Kisi::bilgileriGoster();

	cout << "Ogrenci::bilgileriGoster() ,Cagrildi " << endl;
	cout << "Ogrenci No : " << _ogrenciNo << endl;
	cout << "====================== " << endl;

}

void Ogrenci::getOne(int one)
{
	cout << "Ogrenci::getOne(int one) metodu cagrildi "<< one << endl;
}

void Ogrenci::getOne(int one, int two)
{
	getOne(one);
	cout << "Ogrenci::getOne(int one, int two) metodu cagrildi " << two << endl;
}

void Ogrenci::getOne(int one, int two, int three) 
{
	getOne(one, two);
	cout << "Ogrenci::getOne(int one, int two, int three) metodu cagrildi " << three << endl;
}
