//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat &obj ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator = (const Cat &obj) {
	std::cout << "Cat overload operator \"=\" called" << std::endl;
	type = obj.type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow meow meow..." << std::endl;
}

std::string Cat::getType( void ) const {
	return (type);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}
