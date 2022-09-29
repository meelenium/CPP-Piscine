//
// Created by Tile Tyuuki on 28.09.2022.
//

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

Fixed::Fixed( const Fixed &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator = ( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_number );
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}