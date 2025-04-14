#ifndef GENERAL_H
#define GENERAL_H
#include <iostream>

template <typename T>
class General
{
	private:
		T* data;
		int size;
	public:
		~General()
		{
			delete[] data;
		}

		void addElement( T element)
		{
			T* temp;
			if (data != nullptr)
			{
				temp = new T[size + 1];
				for (int i = 0; i < size; ++i)
				{
					temp[i] = data[i];
				}
				delete[] data;
				data = temp;
				size += 1;
				temp[size - 1] = element;
			}
			else
			{
				temp = new T[1];
				temp[0] = element;
				data = temp;
				size = 1;
			}
		}

		T at(int n)
		{
			if (n > size || n < 1)
			{
				std::cout << "Error: parameter is out of bounds" << std::endl;
				return 0;
			}
			else
			{
				return data[n - 1];
			}
		}
		T sum()
		{
			T total = 0;
			for (int i = 0; i < size; ++i)
			{
				total += data[i];
			}
			return total;
		}
		T max()
		{
			T max = 0;
			for (int i = 0; i < size; ++i)
			{
				if (data[i] > max)
				max = data[i];
			}
			return max;
		}
		T min()
		{
			T min = data[0];
			for (int i = 0; i < size; ++i)
			{
				if (data[i] < min)
					min = data[i];
			}
			return min;
		}
		T* slice(int begin, int end)
		{
			if (begin < 1 || end > size || end < begin)
			{
				std::cout << "Error: invalid bounds" << std::endl;
				return 0;
			}
			T* slice = new T[end - begin];
			for (int i = begin; i < end; ++i)
			{
				slice[i - begin] = data[i - 1];
			}
			return slice;
		}
}
;
#endif
