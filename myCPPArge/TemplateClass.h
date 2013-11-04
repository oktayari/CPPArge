#pragma once

//template class
template <typename T>class TemplateClass
{

protected:
	//template property
	T X;
public:

	//Template methods
	T& getx();
	void setx(T);
};

