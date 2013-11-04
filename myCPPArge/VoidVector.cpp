#include "VoidVector.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

VoidVector::VoidVector()
{
}

VoidVector::VoidVector(int nArraySize)
{
	// store off the number of elements 
	nSize = nArraySize;
	ptrVoid = new VoidPtr[nArraySize];
	reset();
}

int VoidVector::size()
{ 
	return nWriteIndex;
}

void VoidVector::reset()
{ 
	nWriteIndex = 0; 
	nReadIndex = 0;
}

void VoidVector::add(void* pValue)
{
	if (nWriteIndex < nSize)
	{
		ptrVoid[nWriteIndex++] = pValue;
	}
}

VoidPtr VoidVector::get()
{ 
	return ptrVoid[nReadIndex++];
}

VoidVector::~VoidVector()
{
}
