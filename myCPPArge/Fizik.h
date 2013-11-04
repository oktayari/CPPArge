#pragma once
#include "Ders.h"
#include <string>

class Fizik :
	public Ders
{
public:
	Fizik(int dersId, std::string isim);
	virtual ~Fizik();

	void derseBasla();
};

