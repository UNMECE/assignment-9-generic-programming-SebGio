#include <iostream>
#include "general.h"

int main()
{
	General<double> G = General<double>();
	G.addElement(3.7);
	G.addElement(8.909);
	G.addElement(1.36);
	G.addElement(4.4);
	G.addElement(7.39);
	
	std::cout << "G.at(-1): " << G.at(-1) << std::endl;
	std::cout << "G.at(3): " << G.at(3) << std::endl;
	std::cout << "G.at(10): " << G.at(10) << std::endl;
	std::cout << "G.sum(): " << G.sum() << std::endl;
	std::cout << "G.max(): " << G.max() << std::endl;
	std::cout << "G.min(): " << G.min() << std::endl;

	std::cout << "Good Slice: " << std::endl;
	double* slice = G.slice(2, 5);
	for (int i = 0; i < 3; ++i)
	{
		std::cout << i << ": " << slice[i] << std::endl;
	}

	std::cout << "Bad Slice: " << std::endl;
	double* badSlice = G.slice(-1, 3);

	delete[] slice;
	delete[] badSlice;
	
	return 0;
}
