#include "main.h"

using namespace std;

void ekranaYazdir(string& str);

//main program
int main()
{
	ornekler();
	system("pause");
	return 0;
}

void ekranaYazdir(string& str)
{
	cout << str << endl;
}
//menu metodlari
void ornekler()
{
	int menuId = 0;

	menuGoster();
	cout << " " << endl;
	cout << "Menuden Secim Yapiniz ==>";
	
	cin >> menuId;
	
	system("cls");

	switch (menuId)
	{
	case 1:
		loopTest();
		break;
	case 2:
		whileSwitchTest();
		break;
	case 3:
		charTest();
		break;
	case 4:
		stringPrintTest();
		break;
	case 5:
		stringTest();
		break;
	case 6:
		substringTest();
		break;
	case 7:
		pointerTest();
		break;
	case 8:
		pointerArrayTest();
		break;
	case 9:
		pointerFunctionTest();
		break;
	case 10:
		pointerFunctionAdvTest();
		break;
	case 11:
		dynamicMemoryTest();
		break;
	case 12:
		typeDefTest();
		break;
	case 13:
		enumTest();
		break;
	case 14:
		headerTest();
		break;
	case 15:
		classTest();
		break;
	case 16:
		inheritanceTest();
		break;
	case 17:
		polymorphizmTest();
		break;
	case 18:
		abstractClassTest();
		break;
	case 19:
		operatorOverlodingTest();
		break;
	case 20:
		functionTemplateTest();
		break;
	case 21:
		scopeAndNameSpaceTest();
		break;
	case 22:
		exceptionTest();
		break;
	case 23:
		fileReadTest();
		break;
	case 24:
		fileWriteTest();
		break;
	case 25:
		getLineTest();
		break;
	case 26:
		searchingInFileTest();
		break;
	case 27:
		vectorTest();
		break;
	case 28:
		stackTest();
		break;
	case 29:
		pairTest();
		break;
	case 30:
		queueTest();
		break;
	case 31:
		iteratorTest();
		break;
	case 32:
		setTest();
		break;
	case 33:
		listTest();
		break;
	case 34:
		mapTest();
		break;
	case 35:
		dequeueTest();
		break;
	case 36:
		voidVectorTest();
		break;
	case 37:
		genelTest();
		break;
	default:
		break;
	}

	getCevap();
}

void getCevap()
{
	bool devam = true;
	char cevap;

	while (devam)
	{
		cout << "  " << endl;
		cout << "Devam mi ? (E / H)";
		cin >> cevap;

		if (cevap == 'E' || cevap == 'e')
		{
			devam = false;
			ornekler();
		}
		else if (cevap == 'H' || cevap == 'h')
		{
			devam = false;
		}
	}
}
void menuGoster()
{
	cout << "00--" << "Cikis" << endl;
	cout << "01--" << "Loop Test" << endl;
	cout << "02--" << "whileSwitch Test" << endl;
	cout << "03--" << "char Test" << endl;
	cout << "04--" << "stringPrint Test" << endl;
	cout << "05--" << "string Test" << endl;
	cout << "06--" << "substring Test" << endl;
	cout << "07--" << "pointer Test" << endl;
	cout << "08--" << "pointerArray Test" << endl;
	cout << "09--" << "pointerFunction Test" << endl;
	cout << "10--" << "poniterFunctionAdv Test" << endl;
	cout << "11--" << "dynamicMemory Test" << endl;
	cout << "12--" << "typeDef Test" << endl;
	cout << "13--" << "enum Test" << endl;
	cout << "14--" << "header Test" << endl;
	cout << "15--" << "class Test" << endl;
	cout << "16--" << "inheritance Test" << endl;
	cout << "17--" << "polymorphizm Test" << endl;
	cout << "18--" << "abstractClass Test" << endl;
	cout << "19--" << "operatorOverloding Test" << endl;
	cout << "20--" << "functionTemplate Test" << endl;
	cout << "21--" << "scopeAndNameSpace Test" << endl;
	cout << "22--" << "exception Test" << endl;
	cout << "23--" << "fileRead Test" << endl;
	cout << "24--" << "fileWrite Test" << endl;
	cout << "25--" << "getLine Test" << endl;
	cout << "26--" << "searchingInFile Test" << endl;
	cout << "27--" << "vector Test" << endl;
	cout << "28--" << "stack Test" << endl;
	cout << "29--" << "pair Test" << endl;
	cout << "30--" << "queue Test" << endl;
	cout << "31--" << "iterator Test" << endl;
	cout << "32--" << "set Test" << endl;
	cout << "33--" << "list Test" << endl;
	cout << "34--" << "map Test" << endl;
	cout << "35--" << "dequeue Test" << endl;
	cout << "36--" << "VoidVector Test" << endl;
	cout << "37--" << "genel Test" << endl;
	

}

void genelTest()
{

	cout << "Genel Test:" << endl;


	Kisi * kisi = new Kisi(10, "Ahmet", "Mehmet");
	kisi->bilgileriGoster();
	cout << "=======================" << endl;

	kisi = new Ogrenci(20, 1001, "Elif", "ARI");
	kisi->bilgileriGoster();
	cout << "=======================" << endl;

	Ogrenci *ogrenci = new Ogrenci(23, 1004, "Sukran", "SAKINCI ARI");
	cout << "=======================" << endl;
	ogrenci->bilgileriGoster();
	cout << "=======================" << endl;
	ogrenci->getOne(1, 2, 3);
	cout << "=======================" << endl;
	ogrenci->getOne(4, 5);
	cout << "=======================" << endl;
	ogrenci->getOne(6);
	cout << "=======================" << endl;


	kisi = new Ogretmen(1, 121212, "Ayse", "Ogretmen");
	kisi->bilgileriGoster();
	Ogretmen * ogretmenAyse = reinterpret_cast<Ogretmen*>(kisi);
	Ders * tarih = new Tarih(23, "Tarih3");
	ogretmenAyse->dersEkle(tarih);
	ogretmenAyse->dersleriGoster();

	Ogretmen *ogretmen = new Ogretmen(22, 2009234, "Mehmet", "Ogretmen");
	ogretmen->bilgileriGoster();
	cout << "=======================" << endl;

	ogrenci = new Ogrenci(23, 1004, "Sukran", "SAKINCI ARI");
	ogretmen->ogrenciEkle(ogrenci);

	ogrenci = new Ogrenci(25, 2005, "Oktay", "ARI");
	ogretmen->ogrenciEkle(ogrenci);

	ogrenci = new Ogrenci(26, 3005, "Murat", "ARI");
	ogretmen->ogrenciEkle(ogrenci);

	ogretmen->ogrencileriGoster();

	Ders *ders = new Fizik(12, "Fizik1");
	ogretmen->dersEkle(ders);

	ders = new Fizik(14, "Fizik2");
	ogretmen->dersEkle(ders);

	ogretmen->dersleriGoster();
	ogretmen->derseBasla(12);
	ogretmen->derseBasla(14);

	Fizik * fizik = reinterpret_cast<Fizik*>(ders);
	fizik->dersBilgileri();
	fizik->derseBasla();


}

void stringPrintTest()
{
	cout << "string print Test:" << endl;
	int x = 5;
	int y = 10;
	int sonuc = 0;

	sonuc = x + y;

	string strSonuc = "Bu islemin sonucu= " + sonuc;

	ekranaYazdir(strSonuc);


}

void dequeueTest()
{

	cout << "dequeue Test:" << endl;
	std::deque<string> isimler;

	isimler.push_back("Oktay");
	isimler.push_back("Sukran");
	isimler.push_back("Elif");
	isimler.push_back("Murat");
	isimler.push_back("Umut");

	for (int i = 0; i < isimler.size(); i++)
	{
		cout << isimler.front() << endl;
		isimler.pop_front();
	}

}

void listTest()
{

	cout << "list Test:" << endl;

	std::list<string> isimler;

	isimler.push_back("Oktay");
	isimler.push_back("Sukran");
	isimler.push_back("Elif");
	isimler.push_back("Murat");
	isimler.push_back("Umut");

	// ayni isimle birden fazla liste elemani atanabilir
	isimler.push_back("Elif");
	isimler.push_back("Murat");
	isimler.push_back("Umut");


	std::list<string> ::iterator myIterator;

	cout << "list elemanlari:" << endl;

	for (myIterator = isimler.begin(); myIterator != isimler.end(); myIterator++)
	{
		cout << *myIterator << endl;
	}


	isimler.sort();
	cout << " sort isleminden sonra list elemanlari==> " << endl;
	for (myIterator = isimler.begin(); myIterator != isimler.end(); myIterator++)
	{
		cout << *myIterator << endl;
	}


	isimler.unique();

	cout << " unique isleminden sonra list elemanlari==> " << endl;
	for (myIterator = isimler.begin(); myIterator != isimler.end(); myIterator++)
	{
		cout << *myIterator << endl;
	}

	cout << " pop_front() isleminden sonra list elemanlari ==> " << endl;
	isimler.pop_front();

	for (myIterator = isimler.begin(); myIterator != isimler.end(); myIterator++)
	{
		cout << *myIterator << endl;
	}


	cout << " pop_back() isleminden sonra list elemanlari ==> " << endl;
	isimler.pop_back();

	for (myIterator = isimler.begin(); myIterator != isimler.end(); myIterator++)
	{
		cout << *myIterator << endl;
	}

}

void setTest()
{

	cout << "set Test:" << endl;
	std::set<string> isimler;

	isimler.insert("Oktay");
	isimler.insert("Sukran");
	isimler.insert("Elif");
	isimler.insert("Murat");
	isimler.insert("Umut");

	// Hata verir ::  Set icin veriler tek(uniqe) olmali
	// isimler.insert("Umut");

	cout << "set container icindeki elemanlar:" << endl;

		std::set<string> ::iterator myIterator;

	for (myIterator = isimler.begin(); myIterator != isimler.end(); myIterator++)
	{
		cout << *myIterator << endl;
	}

}

void iteratorTest()
{

	cout << "iterate ederek map ve vector Test:" << endl;

	// map kullanarak
	std::map<int, string>  kisiler;
	kisiler[0] = "Oktay";
	kisiler[1] = "Sukran";
	kisiler[2] = "Elif";
	kisiler[3] = "Murat";
	kisiler[4] = "Umut";
	
	cout << "map container icindeki elemanlar:" << endl;
	std::map<int, string> ::iterator myIterator;

	for (myIterator = kisiler.begin(); myIterator != kisiler.end(); myIterator++)
	{
		cout << myIterator->first << " , " << myIterator->second << endl;
	}



	// vector kullanarak
	std::vector<string>  kisilera;
	kisilera.push_back("Oktay");
	kisilera.push_back("Sukran");
	kisilera.push_back("Elif");
	kisilera.push_back("Murat");
	kisilera.push_back("Umut");


	cout << "vector container icindeki elemanlar:" << endl;
	std::vector<string> ::iterator myIteratorv;

	for (myIteratorv = kisilera.begin(); myIteratorv != kisilera.end(); myIteratorv++)
	{
		cout << *myIteratorv << endl;
	}
}

void queueTest()
{

	cout << "queue Test:" << endl;

	// cikti siraya gore olacaktir
	std::queue<int> myQueue;

	myQueue.push(20);
	myQueue.push(10);
	myQueue.push(50);
	myQueue.push(30);

	cout << "Bastaki =>" << myQueue.front() << endl;
	cout << "Sondaki =>" << myQueue.back() << endl;

	myQueue.pop();
	cout << "Siradaki =>" << myQueue.front() << endl;

	myQueue.pop();
	cout << "Siradaki =>" << myQueue.front() << endl;

	myQueue.pop();
	cout << "Siradaki =>" << myQueue.front() << endl;

	// priority_queue olusturuyoruz
	// cikti elemalarin buyukluklerine gore olacaktir
	// queue ye giris sirasina gore degil
	std::priority_queue<int> myPriotyQueue;
	myPriotyQueue.push(20);
	myPriotyQueue.push(10);
	myPriotyQueue.push(50);
	myPriotyQueue.push(40);

	cout << "std::priority_queue<int> myPriotyQueue;" << endl;
	cout << " queue nin elemalari" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << myPriotyQueue.top() << endl;
		myPriotyQueue.pop();
	}
}

void pairTest()
{

	cout << "pair Test:" << endl;

	std::pair<int, int> myPair;
	myPair.first = 10;
	myPair.second = 20;
	cout <<"myPair.first==>"<< myPair.first << " , " << "myPair.second==> "<< myPair.second << endl;

}

void mapTest()
{

	cout << "map Test:" << endl;

	std::map<string, int> myMap;

	myMap["A"] = 1;
	myMap["B"] = 2;
	myMap["C"] = 3;

	cout << "myMap[""A""]==>" << myMap["A"] << endl;
	cout << "myMap[""B""]==>"<< myMap["B"] << endl;
	cout << "myMap[""C""]==>"<< myMap["C"] << endl;

	myMap.insert(make_pair("D", 4));
	myMap.insert(make_pair("E", 5));
	myMap.insert(make_pair("F", 6));

	cout << "myMap[""D""]==>"<< myMap["D"] << endl;
	cout << "myMap[""E""]==>"<< myMap["E"] << endl;
	cout << "myMap[""F""]==>"<< myMap["F"] << endl;


}

void stackTest()
{

	cout << "stack Test:" << endl;

	cout << "stack <int> myStack olusturuyoruz" << endl;
	std::stack <int> myStack;

	myStack.push(12);
	myStack.push(15);
	myStack.push(17);

	cout << "myStack.top()="<< myStack.top() << endl;
	myStack.pop();
	cout << "myStack.top()=" << myStack.top() << endl;
	myStack.pop();
	cout << "myStack.top()=" << myStack.top() << endl;

	cout << "stack <string> myStackString olusturuyoruz" << endl;
	std::stack <string> myStackString;

	myStackString.push("AA");
	myStackString.push("BB");
	myStackString.push("CC");
	
	cout << "myStackString.top()=" << myStackString.top() << endl;
	myStackString.pop();
	cout << "myStackString.top()=" << myStackString.top() << endl;
	myStackString.pop();
	cout << "myStackString.top()=" << myStackString.top() << endl;

}

void vectorTest()
{

	cout << "vector Test:" << endl;
	std::vector<int> sayilar;

	//std::vector<int> sayilar1(4, 100);
	//std::vector<int> sayilar1(4);
	//std::vector<int> sayilar(sayilar1);
	//sayilar.resize(5, 23);

	sayilar.reserve(10);
	cout << "sayilar vectorunun elemanlarini olusturalim:" << endl;
	for (int j = 0; j < sayilar.capacity(); j++)
	{
		sayilar.push_back(j);
	}

	cout << "sayilar vectorunun elemanlari:" << endl;
	for (int i = 0; i < sayilar.size(); i++)
	{
		cout << sayilar[i] << endl;
	}

	sayilar.push_back(10);
	sayilar.push_back(20);

	cout <<"sayilar[0]="<< sayilar[0] << endl;
	cout <<"sayilar[1]="<<sayilar[1] << endl;

	sayilar[0] = 30;
	cout << "sayilar[0]=" << sayilar[0] << endl;

	sayilar.pop_back();

	cout << "sayilar vectorunun elemanlari son durum:" << endl;
	for (int i = 0; i < sayilar.size(); i++)
	{
		cout << sayilar[i] << endl;
	}
	// vectorun 1. elemanini cikartir ve hata aliriz
	//cout << sayilar[1] << endl;
	
}

void substringTest()
{

	cout << "substring Test:" << endl;

	string str1 = "Selam Millet Nerde Bu Millet CPP";
	string str2 = str1.substr(6, 7);

	cout << str1 << endl;
	cout << str2 << endl;

	str2.replace(7, 8, "Oktay ");
	cout << str2 << endl;

	str2.insert(6, "INSERTED");
	cout << str2 << endl;

	str2.erase(7);
	cout << str2 << endl;

	int index = str1.find("CPP");
	cout << index << endl;

	str1.replace(index, 8, "REPLACED");
	cout << str1 << endl;


	index = str1.find_last_not_of("Millet");

	cout << "Millet in ilk goruldugu yer = " << index << endl;


}

void stringTest()
{

	cout << "string Test:" << endl;
	string line("Selam Millet");

	cout <<"Kelime uzunlugu=" << line.length() << endl;

	cout << " .at(indexNumber) kullanarak " << endl;
	cout << "================" << endl;
	cout << line.at(0) << endl;
	cout << line.at(1) << endl;
	cout << line.at(2) << endl;
	cout << line.at(3) << endl;
	cout << line.at(4) << endl;

	cout << "================" << endl;
	cout << "for dongusu ile " << endl;
	for (int i = 0; i < line.length(); i++)
	{
		cout <<i <<".Harf ==>" << line[i] << endl;
	}
}

void searchingInFileTest()
{

	//insert mode da dosyayi aciyoruz
	ofstream openFile("test.txt", ios::in);
	if (openFile.is_open())
	{
		//8.karaktere geliyoruz
		openFile.seekp(8);
		// A harfi insert ediyoruz
		openFile.put('A');
		//TEST kelimesini ekliyoruz
		openFile << "TEST";
		openFile.close();

		cout << "Yazma Islemi Tamam" << endl;
	}else
	{
		cout << "Dosya Acilamadi" << endl;
	}


	ifstream openF("test.txt");
	if (openF.is_open())
	{
		string str;
		//8.karaktere gidiyoruz
		openF.seekg(8);
		// str objesine okuyoruz
		openF >> str;
		// ekrana yaziyoruz
		cout << str << endl;
		openF.close();

		cout << "Okuma Islemi Tamam" << endl;
	}
	else
	{
		cout << "Dosya Acilamadi" << endl;
	}

	

}

void getLineTest()
{

	cout << "getLine() Test:" << endl;
	std::string str;

	cout << "Ad ve soyad giriniz ? " << endl;
	getline(cin, str);

	cout << str << endl;

}

void fileWriteTest()
{

	cout << "file write Test:" << endl;
	string yazilacakString = "Selam Millet.....";
	ofstream openFile;
	openFile.open("test.txt");

	if (openFile.is_open())
	{
		openFile << yazilacakString;
		openFile.close();

		cout << "Dosyaya yazma islemi tamamlandi.." << endl;
	}else
	{
		cout << "Dosya acilamadi" << endl;
	}

}

void fileReadTest()
{

	cout << "file read Test:" << endl;

	string okunanVeri = "";
	fstream openFile;
	openFile.open("test.txt");

	if (openFile.is_open())
	{
		while (!openFile.eof())
		{
			string tmpString;
			openFile >> tmpString;
			okunanVeri += tmpString + " ";
		}

		openFile.close();

		cout <<"Dosya= test.txt "<< " Okunan Veri ==>" << okunanVeri << endl;
	}
	else
	{
		cout << "Dosya Yok , Acilamadi" << endl;
	}

}

void exceptionTest()
{

	cout << "exception Test:" << endl;

	int num1 = 2;
	int num2 = 0;

	try
	{
		if (num2 == 0)
			throw 20;
	}
	catch (int x)
	{
		std::cout << "Hata Olustu Hata No=" << x << " ==> num2 = 1 yapildi" << endl;
		num2 = 1;
	}

	std::cout << "Bolum = " << num1 / num2 << endl;
}

void scopeAndNameSpaceTest()
{

	cout << "scope and namespace  Test:" << endl;
	NameSpaceTest nameSpaceTest;
	nameSpaceTest.startTest();
}

void functionTemplateTest()
{

	cout << "function template Test:" << endl;
	FunctionTemplateC functionTemplateC;
	functionTemplateC.startTest();

}

void operatorOverlodingTest()
{

	cout << "operator overloding Test:" << endl;

	ComplexOl c1(4, 4), c2(2, 2), c3;

	c1.display();
	c2.display();
	c3 = c1 + c2;
	cout << "Toplam = ";
	c3.display();
	c3 = c1 - c2;
	cout << "Fark = ";
	c3.display();
	c3 = c1 * c2;
	cout << "Carpim = ";
	c3.display();
	c3 = c1 / c2;
	cout << "Bolum = ";
	c3.display();

	

}

void abstractClassTest()
{

	cout << "abstract class Test:" << endl;
	// abstract class instance olusturamiyoruz.. 
	// hata veir.
	//DonmusGida donmusGida;

	//Abstract class in pointer ile instance ni olusturduk
	DonmusGida *donmusGida =
		new DonmusPiza(20, 2, 20);
	int miktar = donmusGida->GetMiktar();
	cout << "Miktar = " << miktar << endl;
	int ucret = donmusGida->GetUcret();
	cout << "Ucret = " << ucret << endl;
	donmusGida->Pisir();

	//Cast ederek DonmusPiza ya ait metodlara erisebildik
	DonmusPiza * donmusPizaCasted =
		reinterpret_cast<DonmusPiza*>(donmusGida);
	//int cap =donmusPizaCasted->GetCap();
	//cout << "Cap = " << cap << endl;
	donmusPizaCasted->BilgilerimiGoster();
	donmusPizaCasted->Pisir();

	DonmusPiza donmusPiza(30, 5, 30);
	//cout << "Cap = " << donmusPiza.GetCap() << endl;
	donmusPiza.BilgilerimiGoster();
	donmusPiza.Pisir();

}

void headerTest()
{
	cout << "TO DO TASK" << endl;
}

void polymorphizmTest()
{

	cout << "polymorphizm Test:" << endl;

	Ders *ders = new Fizik(12, "Fizik1");
	ders->dersBilgileri();
	ders->derseBasla();

	ders = new Fizik(13, "Fizik2");
	ders->dersBilgileri();
	ders->derseBasla();
	
	ders = new Matematik(14, "Matematik1");
	ders->dersBilgileri();
	ders->derseBasla();

	ders = new Tarih(14, "Tarih2");
	ders->dersBilgileri();
	ders->derseBasla();

}

void inheritanceTest()
{

	cout << "inheritance Test:" << endl;

	Matematik matematik = Matematik(14, "Matematik1");
	matematik.dersBilgileri();
	matematik.derseBasla();

	Tarih tarih = Tarih(14, "Tarih2");
	tarih.dersBilgileri();
	tarih.derseBasla();

	Fizik fizik = Fizik(14, "Fizik1");
	fizik.dersBilgileri();
	fizik.derseBasla();


}

void classTest()
{

	cout << "class Test:" << endl;

	Ogrenci ogrenci;
	ogrenci._ad = "Oktay";
	ogrenci._soyad = "ARI";
	ogrenci._kisiId = 2;
	ogrenci._ogrenciNo = 37;

	ogrenci.bilgileriGoster();

	Ogretmen ogretmen;
	ogretmen._ad = "Sukran";
	ogretmen._soyad = "Sakinci ARI";
	ogretmen._kisiId = 3;
	ogretmen._sicilNo = 123123;

	ogretmen.bilgileriGoster();

}

void enumTest()
{

	cout << "enum Test:" << endl;

	enum myColors  { Mavi, Yesil, Sari };
	cout << "myColors::Mavi==" <<myColors::Mavi << endl;

	int color = myColors::Yesil;
	cout << "int color = myColors::Yesil " << " color="<< color << endl;
	myColors colora = Sari;
	cout << "myColors colora = Sari " << " colora="<< colora << endl;

}

void typeDefTest()
{

	cout << "typedef Test:" << endl;

	typedef int myInt;
	cout <<"typedef int myInt;"<< endl;
	int x = 5;
	cout <<"int x = 5;"<< endl;
	myInt y = 10 * x;
	cout <<"myInt y = 10 * x;" << endl;
	cout <<"y="<< y << endl;

}

void dynamicMemoryTest()
{

	cout << "dynamic memory Test:" << endl;

	int *allocate = new int;
	cout << "allocate= "<<allocate << " *allocate= "<< *allocate<< endl;
	delete allocate;
	cout << "delete allocate; "<< "  allocate= "<< allocate << endl;
	allocate = 0;
	cout << " allocate = 0; "<< "  allocate= "<<allocate << endl;


	int kitapSayisi = 0;
	cout << "Kac Kitap Istiyorsun ? ";
	cin >> kitapSayisi;
	// nothrow gecersiz  deger girilmesini engeller
	int * kitaplar = new (nothrow) int[kitapSayisi];

	cout << "* kitaplar=" << *kitaplar<<" kitaplar = " << kitaplar << endl;
	if (kitaplar == 0)
	{
		cout << "Hata Olustu" << endl;
	}

	delete [] kitaplar;
	kitaplar = 0;

}

void pointerFunctionAdvTest()
{

	cout << "advanced pointer function Test:" << endl;

	int sayia = 5;
	cout << "int sayia = 5;" << endl;
	int sayib = 3;
	cout << "int sayib = 3;" << endl;
	cout <<" function(&sayia, &sayib) ==>" << function(&sayia, &sayib) << endl;
}

void pointerFunctionTest()
{
	system("cls");

	cout << "pointer function Test:" << endl;

	cout << "operation(4, 4, topla) ==> "<< operation(4, 4, topla) << endl;
	cout << "operation(4, 4, cikar) ==> "<< operation(4, 4, cikar) << endl;
	cout << "operation(4, 4, carp) ==> "<< operation(4, 4, carp) << endl;
	cout << "operation(4, 4, bol) ==> "<< operation(4, 4, bol) << endl;

	int(*add)(int, int) = topla;
	int sub = cikar(10, 5);

	cout << "int(*add)(int, int) = topla" << endl;
	cout << "int sub = cikar(10, 5);" << endl;
	cout << "operation(5, sub, add) ==> "<< operation(5, sub, add) << endl;
	
}

void pointerArrayTest()
{

	cout << "pointer array Test:" << endl;

	int myArray [] = { 2, 4, 6, 8, 10 };
	int *p = myArray;
	cout << "int myArray [] = { 2, 4, 6, 8, 10 };" << endl;
	cout <<" int *p = myArray; "<< endl;

	cout << " myArray[0] =>" << " *p = "<< *p << endl;

	*p = 20;
	cout << " myArray[0]="<< " *p = "<<*p << endl;

	p++;
	cout << "p++;" << endl;
	cout << " *p = "<<*p << endl;
	*p = 40;
	cout << " *p = "<<*p << endl;
	p++;
	cout << "p++;" << endl;
	cout << " *p = "<<*p << endl;
	*p = 60;
	cout << " *p = "<<*p << endl;
	p++;
	cout << "p++;" << endl;
	cout << " *p = "<<*p << endl;
	*p = 80;
	cout << " *p = "<<*p << endl;
	p++;
	cout << "p++;" << endl;
	cout << " *p = "<<*p << endl;
	*p = 100;
	cout << " *p ==> "<<*p << endl;

	cout << "================== "<< endl;

	p = myArray;

	cout << "myArray son durum" << endl;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p++;
	cout << *p << endl;
	p++;
	cout << *p << endl;

	cout << "================== "<< endl;

	p = myArray;
	
	*(p + 1) = 200;
	cout << "array[1] = 200" << "p*(p + 1) = 200;" << endl;
	
	cout << "array[0] ="<<" *p = "<<*p << endl;
	p++;
	cout << "p++;" << endl;
	cout <<"array[1]= "<< " *p = "<<*p << endl;

}

void pointerTest()
{

	cout << "pointer Test:" << endl;

	int sayia = 5;
	cout <<"int sayia = 5;" << endl;
	int *sayib = &sayia;
	cout <<"int *sayib = &sayia;" << endl;
	
	cout << "sayia= "<< sayia << " &sayia= " << &sayia << endl;
	cout << "sayib= "<< sayib << " &sayib= " << &sayib << " *sayib= " << *sayib << endl;
	
	cout <<"*sayib += 5 ====> den sonra" << endl;
	*sayib += 5;
	cout << "sayia= "<< sayia << " &sayia= " << &sayia << endl;
	cout << "sayib= "<< sayib << " &sayib= " << &sayib << " *sayib= " << *sayib << endl;

}

void charTest()
{
	cout << "char Test:" << endl;
	char myChar [] = { 'A', 'B', 'C', '\0' };
	cout << "char myChar [] = { 'A', 'B', 'C', '\\0' };==>"<< myChar << endl;
	char myChara [] = "BABABBA";
	cout << "char myChara [] = \"BABABBA\";==>" << myChara << endl;
}

void whileSwitchTest()
{

	cout << "while switch Test:" << endl;

	int sayia, sayib, sonuc;

	int islem = 1;

	
	while (islem != 0)
	{
		system("cls");


		sonuc = 0;
		sayia = 0;
		sayib = 0;


		cout << "2 Sayi Giriniz" << endl;
		cin >> sayia >> sayib;

		cout << "1-Topla" << endl;
		cout << "2-Cikar" << endl;
		cout << "3-Carp" << endl;
		cout << "4-Bol" << endl;
		cout << "5-Ozel Toplam" << endl;
		cout << "0- Cikis" << endl;

		cout << "islem seciniz " << endl;
		cin >> islem;

		switch (islem)
		{
		case 1:
			sonuc = topla(sayia, sayib);
			cout << "Toplam = ";
			cout << sonuc << endl;
			break;
		case 2:
			sonuc = cikar(sayia, sayib);
			cout << "Fark = ";
			cout << sonuc << endl;
			break;
		case 3:
			sonuc = carp(sayia, sayib);
			cout << "Carpim = ";
			cout << sonuc << endl;
			break;
		case 4:
			sonuc = bol(sayia, sayib);
			cout << "Bolum = ";
			cout << sonuc << endl;
			break;
		case 5:
			ozelIslem(sayia, sayib, sonuc);
			cout << "Ozel Toplam = ";
			cout << sonuc << endl;
			break;

		default:
			cout << sonuc << endl;
			break;
		}

		char secim;
		bool evet = true;

		while (evet)
		{
			cout << "Yeni Islem Yapacakmisiniz (E/H)";
			cin >> secim;
			if (secim == 'E' || secim == 'e'){
				evet = false;
			}
			else if (secim == 'H' || secim == 'h')
			{
				evet = false;
				islem = 0;
			}
		}
	}

}

void loopTest()
{

	cout << "loop Test:" << endl;

	srand(time(0));

	int rndNumbers[30];

	for (int b = 0; b < 30; b++)
	{
		rndNumbers[b] = rand() % 15;
	}


	for (int c = 0; c < 30; c++)
	{
		for (int j = 0; j <= rndNumbers[c]; j++)
		{
			cout << "=";
		}
		cout << ">>" << endl;
	}
}

void voidVectorTest()
{

	cout << "voidVector Test:" << endl;

	// vector olusturalim 
	VoidVector vv(10);
	// vector e degerler atayalim
	cout << "istediginiz kadar sayi giriniz.. \n"
		<< "(Sonlandirmak icin eksi(-) sayi giriniz. ) :" <<
		endl;
	for (;;)
	{
		int* p = new int;
		cin >> *p;

		if (*p < 0)
		{
			delete p;
			break;
		}

		vv.add((void*) p);
	}

	cout << "\n Girmis Oldugunuz Sayilar..:" << endl;

	for (int i = 0; i < vv.size(); i++)
	{
		int* p = (int*) vv.get();
		cout << i << " : " << *p << endl;
	}

}



// Yardimci Methodlar

int function(void *sayia, void *sayib)
{
	return *(int *) sayia + *(int *) sayib;
}

void ozelIslem(int sayia, int sayib, int &sonuc)
{
	sonuc = sayia + sayib;
}

int operation(int x, int y, int(*function)(int, int)){

	return (*function)(x, y);
}

int topla(int sayia, int sayib)
{
	return sayia + sayib;
}
int cikar(int sayia, int sayib)
{
	return sayia - sayib;
}
int carp(int sayia, int sayib)
{
	return sayia * sayib;
}
int bol(int sayia, int sayib)
{
	return sayia / sayib;
}

