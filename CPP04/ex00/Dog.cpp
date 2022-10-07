//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog &obj ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator = (const Dog &obj) {
	std::cout << "Dog overload operator \"=\" called" << std::endl;
	type = obj.type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woof woof woof..." << std::endl;
}

std::string Dog::getType( void ) const {
	return (type);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

