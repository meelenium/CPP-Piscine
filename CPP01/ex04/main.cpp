//
// Created by Tile Tyuuki on 18.09.2022.
//

#include "SubFile.hpp"

int ft_error(const char *message) {
	std::cout << message << std::endl;
	return (1);
}

int main( int argc, char **argv ) {
	if(argc != 4)
		return ( ft_error("arg != 3") );

	SubFile subFile( argv[1], argv[2], argv[3] );
	subFile.replaceAndWrite();
}