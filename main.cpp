#include <iostream>
#include "general.h"

int main()
{
	General<float> G();
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

	
	return 0
}
