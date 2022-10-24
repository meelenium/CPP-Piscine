//
// Created by Tile Tyuuki on 24.10.2022.
//

#ifndef SERELIZATION_HPP
# define SERELIZATION_HPP

# include <string>
# include <iostream>
#include "someheader.hpp"

class Serelization {

public:
	Serelization( void );
	Serelization( const Serelization &obj );
	~Serelization( void );

	Serelization &operator = ( const Serelization &obj );

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);

};

#endif
