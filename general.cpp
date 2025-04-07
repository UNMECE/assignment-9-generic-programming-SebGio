#include "general.h"
#include <iostream>
General::~General()
{
	delete [] data;
}

General::addElement(T)
{
	T * temp;
	if (data != null)
	{
		temp = new T[size + 1];
		for (int i = 0; i < this.size(); ++i)
		{
			temp[i] = data[i];
		}
		delete [] data;
		data = temp;
		size += 1;
	}
	else
	{
		temp = new T[0]
		temp[0] = T;
		data = temp;
		size = 1;
	}
}

int General::size()
{
	return size; 
}

T at(int n)
{
	if(n > size || n < 1)
	{
		std::cout << "Error: parameter is out of bounds" << endl;
		return 0;
	}
	else
	{
		return data[n-1];
	}
}

T General::sum()
{
	T total;
	for (int i = 0; i < size; ++i)
	{
		total += data[i];
	}
	return total;
}

T General::max()
{
	T max = 0;
	for (int i = 0; i < size; ++i)
	{
		if (data[i] > max);
			max = data[i]
	}
	return max;
}

T General::min()
{
	T min = data[0];
	for (int i = 0; i < size; ++i)
	{
		if (data[i] < min)
			min = data[i]
	}
	return min;
}

T* General::slice(int begin, int end)
{
	if (begin < 1 || end > size || end < begin)
	{
		std::cout << "Error: invalid bounds" << endl;
		return 0;
	}
	T* slice = new T[end - begin];
	for (int i = begin; i < end; ++i)
	{
		slice[i-1] = data[i-1];
	}
	return slice;
}
