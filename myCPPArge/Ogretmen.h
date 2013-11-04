#pragma once
#include "Kisi.h"
#include "Ogrenci.h"
#include "Ders.h"

class Ogretmen :
	public Kisi
{
private :
	Ogrenci  *ogrenciler[20];
	int ogrenciIndex = 0;

	Ders *dersler[20];
	int dersIndex = 0;

public:

	int _sicilNo;

	Ogretmen();
	Ogretmen(int kisiId, int sicilNo, std::string ad, std::string soyad);
	virtual ~Ogretmen();

	void bilgileriGoster();
	
	void dersEkle(Ders * ders);
	void dersleriGoster();
	void ogrenciEkle(Ogrenci * ogrenci);
	void ogrencileriGoster();
	void derseBasla(int dersId);
	
};

