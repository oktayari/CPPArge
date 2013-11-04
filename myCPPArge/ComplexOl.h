#pragma once
class ComplexOl
{
private:
	int a, b;

public:
	
	ComplexOl();
	ComplexOl(int x, int y);
	~ComplexOl();

	ComplexOl operator+(ComplexOl c2);
	ComplexOl operator-(ComplexOl c2);
	ComplexOl operator*(ComplexOl c2);
	ComplexOl operator/(ComplexOl c2);

	void display();
};

