//
// Created by Tile Tyuuki on 26.10.2022.
//

# include "Base.hpp"
# include "A.hpp"
# include "C.hpp"
# include "B.hpp"
# include "Base.hpp"
# include <iostream>

Base *generate( void ) {
	srand( time( NULL ) );
	switch( rand() % 3 ) {
		case 0: {
			return ( new A );
		}
		case 1: {
			return ( new B );
		}
		case 2: {
			return ( new C );
		}
	}
	return (nullptr);
}

void identify( Base* p ) {
	if( dynamic_cast<A *>( p ) ) {
		std::cout << "A" << std::endl;
	} else if ( dynamic_cast<B *>( p ) ) {
		std::cout << "B" << std::endl;
	} else if(  dynamic_cast<C *>( p )  ) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Type not found" << std::endl;
	}
}

void identify( Base &p ) {
	try {
		(void)dynamic_cast<A &>( p );
		std::cout << "A" << std::endl;
		return ;
	} catch ( const std::bad_cast &ex ) {

	}

	try {
		(void)dynamic_cast<B &>( p );
		std::cout << "B" << std::endl;
		return ;
	} catch ( const std::bad_cast &ex ) {

	}

	try {
		(void)dynamic_cast<C &>( p );
		std::cout << "C" << std::endl;
		return ;
	} catch ( const std::bad_cast &ex ) {
		std::cout << "Type not found" << std::endl;
	}
}

int main( void ) {
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
}