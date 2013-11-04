#include "ComplexOl.h"
#include <iostream>

ComplexOl::ComplexOl()
{
	a = 0;
	b = 0;
}


ComplexOl ::~ComplexOl()
{}

ComplexOl::ComplexOl(int x, int y)
{
	a = x;
	b = y;
}

ComplexOl ComplexOl ::operator+ (ComplexOl c2)
	{
		ComplexOl c3;
		c3.a = a + c2.a;
		c3.b = b + c2.b;
		return c3;
	}
ComplexOl ComplexOl :: operator- (ComplexOl c2)
	{
		ComplexOl c3;
		c3.a = a - c2.a;
		c3.b = b - c2.b;
		return c3;
	}

ComplexOl ComplexOl :: operator* (ComplexOl c2)
	{
		ComplexOl c3;
		c3.a = (a*c2.a) - (b*c2.b);
		c3.b = (b*c2.a) + (a*c2.b);
		return c3;
	}

ComplexOl ComplexOl :: operator/ (ComplexOl c2)
	{
		ComplexOl c3;
		c3.a = ((a*c2.a) + (b*c2.b)) / ((c2.a*c2.a) + (c2.b*c2.b));
		c3.b = ((b*c2.a) - (a*c2.b)) / ((c2.a*c2.a) + (c2.b*c2.b));
		return c3;
	}

void ComplexOl::display()
	{
		std::cout << a << "+" << b << "i" << std::endl;
	}
