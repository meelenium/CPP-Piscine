//
// Created by Tile Tyuuki on 24.10.2022.
//

#include "Serelization.hpp"

Serelization::Serelization( void ) {
	std::cout << "Default constructor called" << std::endl;
}

Serelization::Serelization( const Serelization &obj ) {
	(void)obj;
	std::cout << "Copy constructor called" << std::endl;
}

Serelization &Serelization::operator = ( const Serelization &obj ) {
	(void)obj;
	std::cout << "operator overload \"=\" called" << std::endl;
	return (*this);
}

uintptr_t Serelization::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serelization::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

Serelization::~Serelization( void ) {
	std::cout << "destructor called" << std::endl;
}