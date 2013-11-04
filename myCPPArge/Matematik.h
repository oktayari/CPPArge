#pragma once
#include "Ders.h"
#include <string>

class Matematik :
	public Ders
{
public:
	Matematik(int dersId, std::string isim);
	virtual ~Matematik();

	//overridden
	void derseBasla();
};

