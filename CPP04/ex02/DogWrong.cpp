//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "DogWrong.hpp"

DogWrong::DogWrong( void ) {
	std::cout << "DogWrong constructor called" << std::endl;
	type = "DogWrong";
}

DogWrong::DogWrong( const DogWrong &obj ) {
	std::cout << "DogWrong copy constructor called" << std::endl;
	*this = obj;
}

DogWrong &DogWrong::operator = (const DogWrong &obj) {
	std::cout << "DogWrong overload operator \"=\" called" << std::endl;
	type = obj.type;
	return (*this);
}

void DogWrong::makeSound() const {
	std::cout << "woof woof woof..." << std::endl;
}

std::string DogWrong::getType( void ) const {
	return (type);
}

DogWrong::~DogWrong() {
	std::cout << "DogWrong destructor called" << std::endl;
}

