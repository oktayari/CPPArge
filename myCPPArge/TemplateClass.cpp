#include "TemplateClass.h"

//Template method
template <typename T>
T &TemplateClass<T>::getx()
{
	return x;
}
//Template method
template <typename T>
void TemplateClass<T>::setx(T newx)
{
	x = newx;
}