#include "StackDouble.h"

StackDouble::StackDouble()
{
	A = new double[1];
	capacity = 1;
	length = 0;
}

StackDouble::~StackDouble()
{
	delete[] A;
}

template<typename T>
void StackDouble::CopyArr(T* fromArr, T* toArr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		toArr[i] = fromArr[i];
	}
}

void StackDouble::push(double element)
{
	if (length + 1 >= capacity)
	{
		double* tempArr = new double[++capacity];
		CopyArr(A, tempArr, capacity - 1);
		delete[] A;
		A = tempArr;
	}
	A[length++] = element;
}

double StackDouble::pop()
{
	if (length < 1)
	{
		return nan("");
	}
	return A[--length];
}
