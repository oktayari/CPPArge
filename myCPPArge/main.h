#pragma once

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <iterator>
#include <set>
#include <list>

#include "DonmusGida.h"
#include "DonmusPiza.h"

#include "Ders.h"
#include "Fizik.h"
#include "Matematik.h"
#include "Tarih.h"

#include "Kisi.h"
#include "Ogrenci.h"
#include "Ogretmen.h"

#include "VoidVector.h"
#include "ComplexOl.h"
#include "TemplateClass.h"
#include "FunctionTemplateC.h"
#include "NameSpaceTest.h"


//yardimci metodlar
void ozelIslem(int sayia, int sayib, int &sonuc);
int function(void *sayia, void *sayiab);

int operation(int x, int y, int(*function)(int, int));
int topla(int sayia, int sayib);
int cikar(int sayia, int sayib);
int carp(int sayia, int sayib);
int bol(int sayia, int sayib);

// test metodlari
void menuGoster();
void getCevap();
void ornekler();
void whileSwitchTest();
void charTest();
void pointerTest();
void pointerArrayTest();
void pointerFunctionTest();
void pointerFunctionAdvTest();
void dynamicMemoryTest();
void typeDefTest();
void classTest();
void enumTest();
void inheritanceTest();
void polymorphizmTest();
void headerTest();
void abstractClassTest();
void operatorOverlodingTest();
void functionTemplateTest();
void scopeAndNameSpaceTest();
void exceptionTest();
void fileReadTest();
void fileWriteTest();
void getLineTest();
void searchingInFileTest();
void stringTest();
void substringTest();
void vectorTest();
void stackTest();
void mapTest();
void pairTest();
void queueTest();
void iteratorTest();
void setTest();
void listTest();
void dequeueTest();
void stringPrintTest();
void genelTest();
void loopTest();
void voidVectorTest();
