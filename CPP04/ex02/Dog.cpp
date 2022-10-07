//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	type = "Dog";
}

Dog::Dog( const Dog &obj ) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = obj;
}

Dog &Dog::operator = (const Dog &obj) {
	std::cout << "Dog overload operator \"=\" called" << std::endl;
	type = obj.type;
	this->_brain = obj.getBrain();
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "woof woof woof..." << std::endl;
}

std::string Dog::getType( void ) const {
	return (type);
}

Brain *Dog::getBrain() const {
	return (this->_brain);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

