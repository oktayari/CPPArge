#pragma once
#include <string>

class Kisi
{
public:

	//ortak ozellikler
	int _kisiId;
	std::string _ad;
	std::string _soyad;
	
	Kisi();
	Kisi(int kisiId, std::string ad, std::string soyad);
	virtual ~Kisi();

	//override edilecek birtual method
	virtual void bilgileriGoster();
};

