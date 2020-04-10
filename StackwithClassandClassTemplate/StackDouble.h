#pragma once
#include <cmath>

class StackDouble
{
	double* A;    // array for storage
	int capacity = 1;       // capacity of A
	int length = 0;
public:
	StackDouble();
	~StackDouble();
	template<typename T> void CopyArr(T* fromArr, T* toArr, int len);
	void push(double element);
	double pop();
};


