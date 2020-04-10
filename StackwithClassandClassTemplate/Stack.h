#pragma once
#include <cstdlib>

template<typename T>
class Stack
{
	T* A;
	int capacity = 1;
	int length = 0;
public:
	Stack()
	{
		A = new T[1];
		capacity = 1;
		length = 0;
	}

	~Stack()
	{
		delete[] A;
	}

	void CopyArr(T* fromArr, T* toArr, int len)
	{
		for (int i = 0; i < len; ++i)
		{
			toArr[i] = fromArr[i];
		}
	}

	bool isEmpty()
	{
		if (length < 1)
		{
			return true;
		}
		return false;
	}

	void push(T element)
	{
		if (length + 1 >= capacity)
		{
			T* tempArr = new T[++capacity];
			CopyArr(A, tempArr, capacity - 1);
			delete[] A;
			A = tempArr;
		}
		A[length++] = element;
	}

	T pop()
	{
		if (length < 1)
		{
			exit(0);
		}
		return A[--length];
	}

};