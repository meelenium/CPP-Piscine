//
// Created by Tile Tyuuki on 18.10.2022.
//

#include <iostream>
#include <iomanip>
#include "Cast.hpp"

int main( int argc, char **argv ) {

	if( argc != 2 ) {
		std::cout << "[ERROR]\nArgument error" << std::endl;
	} else {
		Cast cast( argv[1] );
		cast.toChar();
		cast.toInt();
		cast.toFloat();
		cast.toDouble();

		std::cout << std::endl << "If change variable yourself on \"12213.21f\"" << std::endl;
		cast.setVariable( "12213.21f" );
		cast.toChar();
		cast.toInt();
		cast.toFloat();
		cast.toDouble();
	}
}