#include "FunctionTemplateC.h"
#include <iostream>
#include <string>


//function template
template<class T>
T toplaTemplate(T a, T b)
{
	return a + b;
};


//function template
template<class T>
T cikarTemplate(T a, T b)
{
	return a - b;
};

//function template
template<class T>
T carpTemplate(T a, T b)
{
	return a * b;
};


//function template
template<class T>
T bolTemplate(T a, T b)
{
	return a / b;
};


using namespace std;

FunctionTemplateC::FunctionTemplateC()
{
}


FunctionTemplateC::~FunctionTemplateC()
{
}

void FunctionTemplateC::startTest()
{
	cout << toplaTemplate<int>(12, 12) << endl;
	cout << toplaTemplate<double>(12.5, 12.8) << endl;
	cout << toplaTemplate<float>(12, 12) << endl;
	cout << toplaTemplate<string>("A", "B") << endl;


	cout << toplaTemplate(12, 12) << endl;
	cout << toplaTemplate(12.5, 12.8) << endl;
	cout << toplaTemplate(12.345, 12.567) << endl;
	cout << toplaTemplate<string>("A", "B") << endl;


	cout << carpTemplate<int>(12, 12) << endl;
	cout << carpTemplate<double>(12.5, 12.8) << endl;
	cout << carpTemplate<float>(12, 12) << endl;
	//cout << carpTemplate<string>("A", "B") << endl;

}
