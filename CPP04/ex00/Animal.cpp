//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "NoName";
}

Animal::Animal( const Animal &obj ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator = (const Animal &obj) {
	std::cout << "Animal overload operator \"=\" called" << std::endl;
	this->type = obj.type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "I'm animal" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}