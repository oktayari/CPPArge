#pragma once
#include "Ders.h"

#include <string>
class Tarih :
	public Ders
{
public:
	Tarih(int dersId, std::string isim);
	virtual ~Tarih();

	void derseBasla();
};

