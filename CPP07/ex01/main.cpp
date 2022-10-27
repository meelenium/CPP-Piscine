//
// Created by Tile Tyuuki on 27.10.2022.
//

#include "iter.hpp"
#include <iostream>

void foo( int &num ) {
	num++;
}

int main( void ) {
	int array[] = {1, 2, 3, 4, 5};

	std::cout << "Before iter" << std::endl;
	std::cout << "============" << std::endl;
	for(int i = 0; i < 5; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl << "============" << std::endl;
	std::cout << std::endl;
	std::cout << "After iter" << std::endl;
	std::cout << "============" << std::endl;
	iter(array, 5, foo);
	for(int i = 0; i < 5; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl << "============" << std::endl;
}