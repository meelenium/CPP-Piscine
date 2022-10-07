//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "CatWrong.hpp"

CatWrong::CatWrong( void ) {
	std::cout << "CatWrong constructor called" << std::endl;
	type = "CatWrong";
}

CatWrong::CatWrong( const CatWrong &obj ) {
	std::cout << "CatWrong copy constructor called" << std::endl;
	*this = obj;
}

CatWrong &CatWrong::operator = (const CatWrong &obj) {
	std::cout << "CatWrong overload operator \"=\" called" << std::endl;
	type = obj.type;
	return (*this);
}

void CatWrong::makeSound() const {
	std::cout << "meow meow meow..." << std::endl;
}

std::string CatWrong::getType( void ) const {
	return (type);
}

CatWrong::~CatWrong() {
	std::cout << "CatWrong destructor called" << std::endl;
}

