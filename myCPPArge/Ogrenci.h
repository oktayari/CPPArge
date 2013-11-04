#pragma once
#include "Kisi.h"

class Ogrenci :
	public Kisi
{
public:

	int _ogrenciNo;

	Ogrenci();
	Ogrenci(int kisiId,int ogrenciNo, std::string ad, std::string soyad);
	
	virtual ~Ogrenci();

	//overriden method
	void bilgileriGoster();

	//method parameter overload
	void getOne(int one);
	void getOne(int one, int two);
	void getOne(int one, int two, int three);

	
};

