#pragma once
#include <string>

class Ders
{

private:
	//ortak ozellikler
	int _dersId;
	std::string _isim;

public:
	Ders(int dersId, std::string isim);
	virtual ~Ders();
	
	//ortak metodlar
	int getDersId();
	std::string getDersAdi();
	void dersBilgileri();
	
	// tureyen siniflarda ezilebilir virtual method
	virtual void derseBasla();
	

	
};

