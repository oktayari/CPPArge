#include "NameSpaceTest.h"
#include <iostream>


//outer variable
int variable = 12;

namespace one
{
	int x = 3;
	int y = 4;
}

namespace two
{
	int x = 6;
	int y = 8;
}


NameSpaceTest::NameSpaceTest()
{
	std::cout << "scope ve namespace test:" << std::endl;
}


NameSpaceTest::~NameSpaceTest()
{
}


void NameSpaceTest::startTest()
{
	//inner variable
	int variable = 10;

	// outer variable value;
	std::cout << "outer variable value:" ;
	// scope operator ::
	std::cout << ::variable << std::endl;

	std::cout << "inner variable value:" ;
	std::cout << variable << std::endl;


	//namespace separation
	std::cout << one::x << std::endl;
	std::cout << one::y << std::endl;

	std::cout << two::x << std::endl;
	std::cout << two::y << std::endl;

	//another namespace separation

	{
		using namespace one;
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		}

	{
		using namespace two;
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		}

}