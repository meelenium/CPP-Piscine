//
// Created by Tile Tyuuki on 27.10.2022.
//

#include "Array.hpp"
#include <iostream>

#define ARRAY_SIZE 5

int main( void ) {

	std::cout << "Test on overload operator \"=\" and \"[]\"" << std::endl;
	std::cout << "==============================" << std::endl;
	try {
		Array<int> first( ARRAY_SIZE );
		for( int i = 0; i < ARRAY_SIZE; i++ ) {
			first[i] = 1;
		}

		std::cout << "Before first = second" << std::endl;
		for( int i = 0; i < ARRAY_SIZE; i++ ) {
			std::cout << "first[" << i << "] - "
					  << first[i] << std::endl;
		}

		Array<int> second( ARRAY_SIZE );
		for( int i = 0; i < ARRAY_SIZE; i++ ) {
			second[i] = 2;
		}
		first = second;

		std::cout << std::endl;

		std::cout << "After first = second" << std::endl;
		for( int i = 0; i < ARRAY_SIZE; i++ ) {
			std::cout << "first[" << i << "] - "
					  << first[i] << std::endl;
		}
	} catch ( std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "==============================" << std::endl;
	std::cout << std::endl;

	std::cout << "test on Exception" << std::endl;
	std::cout << "==============================" << std::endl;
	try {
		Array<int> ex;
		std::cout << ex[1] << std::endl;
	} catch ( std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "==============================" << std::endl;
	std::cout << std::endl;
}