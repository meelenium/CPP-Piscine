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

	//Subject tests

//	int a = 2;
//	int b = 3;
//	::swap( a, b );
//	std::cout << "a = " << a << ", b = " << b << std::endl;
//	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//	std::string c = "chaine1";
//	std::string d = "chaine2";
//	::swap(c, d);
//	std::cout << "c = " << c << ", d = " << d << std::endl;
//	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//	return 0;
}