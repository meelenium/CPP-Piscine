//
// Created by Tile Tyuuki on 05.10.2022.
//

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &obj ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator = (const Brain &obj) {
	std::cout << "Brain overload operator \"=\" called" << std::endl;
	for(int i = 0; i < (int)this->ideas->length(); i++) {
		this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}