//
// Created by Tile Tyuuki on 27.10.2022.
//

#include <iostream>
#include "whatever.hpp"

int main( void ) {
	int a, b;

	a = 2;
	b = 4;

	std::cout << "Swap" << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << "a: " << a << ' ' << "b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << ' ' << "b: " << b << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << std::endl;

	std::cout << "Min" << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << std::endl;

	std::cout << "Max" << std::endl;
	std::cout << "=============" << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << "=============" << std::endl;
}