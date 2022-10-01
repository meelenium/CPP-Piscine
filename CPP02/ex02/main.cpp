//
// Created by Tile Tyuuki on 28.09.2022.
//

#include "Fixed.hpp"

int main( void ) {

	Fixed a(10);
	Fixed b(5);
	Fixed c;
	Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const e( 5.1f );
	Fixed const f( 5.0f );

	std::cout << "Subject tests" << std::endl;
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << Fixed::max( c, d ) << std::endl;

	std::cout << std::endl << "True or false tests" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "b > a - " << ((b > a) ? "true" : "false") << std::endl;
	std::cout << "b < a - " << ((b < a) ? "true" : "false") << std::endl;
	std::cout << "b >= a - " << ((b >= a) ? "true" : "false") << std::endl;
	std::cout << "b <= a - " << ((b <= a) ? "true" : "false") << std::endl;

	std::cout << std::endl << "Arithmetics tests" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	std::cout << std::endl << "Increment and decrement tests" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "--a = " << --a << std::endl;

	std::cout << std::endl << "min and max static methods test" << std::endl;
	std::cout << "a = " << a << ", b = " << b << "; e = " << e << ", f = " << f << std::endl;
	std::cout << "a > b = " << Fixed::max(a, b) << std::endl;
	std::cout << "e > f = " << Fixed::max(e, f) << std::endl;
	std::cout << "a < b = " << Fixed::min(a, b) << std::endl;
	std::cout << "e < f = " << Fixed::min(e, f) << std::endl;

	return ( 0 );
}