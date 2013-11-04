
#include "Kitap.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


   void Kitap:: DisplayMyName()
	{
		cout << "Base Class" << endl;
	}
	void Kitap::setSayfaSayisi(int value)
	{
		this->sayfaSayisi = value;
	}

	void Kitap::displaySayfaSayisi()
	{
		cout << "Sayfa Sayisi = ";
		cout << this->sayfaSayisi << endl;

	}
	void Kitap::setKitapId(int value)
	{
		this->kitapId = value;
	}
	void Kitap::displayKitapId()
	{
		cout << "kitapId = ";
		cout << this->kitapId << endl;
	}
