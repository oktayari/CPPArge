#include "DonmusGida.h"


int DonmusGida::GetUcret()
{
	return _ucret;
}

int DonmusGida::GetMiktar()
{
	return _miktar;
}

int DonmusGida::GetToplamUcret()
{
	_prToplam = _miktar * _ucret;
	return _prToplam;
}

