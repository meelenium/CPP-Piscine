//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "AnimalWrong.hpp"

AnimalWrong::AnimalWrong( void ) {
	std::cout << "AnimalWrong constructor called" << std::endl;
	this->type = "NoNameWrong";
}

AnimalWrong::AnimalWrong( const AnimalWrong &obj ) {
	std::cout << "AnimalWrong copy constructor called" << std::endl;
	*this = obj;
}

AnimalWrong &AnimalWrong::operator = (const AnimalWrong &obj) {
	std::cout << "AnimalWrong overload operator \"=\" called" << std::endl;
	this->type = obj.type;
	return (*this);
}

void AnimalWrong::makeSound() const {
	std::cout << "I'm AnimalWrong" << std::endl;
}

std::string AnimalWrong::getType() const {
	return (this->type);
}

AnimalWrong::~AnimalWrong() {
	std::cout << "Animal destructor called" << std::endl;
}
