#pragma once
class DonmusGida
{
private:
	int _prToplam;
protected:
	int _ucret;
	int _miktar;
public:
	
	int GetUcret();
	int GetMiktar();
	int GetToplamUcret();
	//Sinifin Abstract olmasini sagladik
	virtual void Pisir() = 0;


};

