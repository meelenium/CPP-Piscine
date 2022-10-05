//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
	type = "Cat";
}

Cat::Cat( const Cat &obj ) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Cat &Cat::operator = (const Cat &obj) {
	std::cout << "Cat overload operator \"=\" called" << std::endl;
	type = obj.type;
	*this->_brain = *obj.getBrain();
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "meow meow meow..." << std::endl;
}

std::string Cat::getType( void ) const {
	return (type);
}

Brain *Cat::getBrain( void ) const {
	return (this->_brain);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}
