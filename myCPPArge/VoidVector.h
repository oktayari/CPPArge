#pragma once

typedef void* VoidPtr;

class VoidVector
{

protected:
	int nSize;
	int nWriteIndex;
	int nReadIndex;
	VoidPtr* ptrVoid;


public:

	int size();

	VoidVector();
	VoidVector(int nArraySize);
	void reset();
	void add(void* pValue);
	VoidPtr get();
	virtual ~VoidVector();
};

