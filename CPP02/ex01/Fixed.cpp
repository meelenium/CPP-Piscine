//
// Created by Tile Tyuuki on 28.09.2022.
//

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

Fixed::Fixed( const int _number ) {
	std::cout << "Int constructor called" << std::endl;
	this->_number = _number << this->_rawBits;
}

Fixed::Fixed( const float _number ) {
	std::cout << "Float constructor called" << std::endl;
	this->_number = std::roundf( _number * (1 << this->_rawBits) );
}

Fixed::Fixed( const Fixed &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator = ( const Fixed &obj ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = obj.getRawBits();
	return ( *this );
}

std::ostream &operator << ( std::ostream &os, const Fixed &obj ) {
	os << obj.toFloat();
	return ( os );
}

float Fixed::toFloat( void ) const {
	return ( this->_number / (float) (1 << this->_rawBits) );
}

int Fixed::toInt( void ) const {
	return ( this->_number >> this->_rawBits );
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