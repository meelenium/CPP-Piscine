//
// Created by Tile Tyuuki on 28.09.2022.
//

#include "Fixed.hpp"

Fixed::Fixed( void ) {
//	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

Fixed::Fixed( const int _number ) {
//	std::cout << "Int constructor called" << std::endl;
	this->_number = _number << this->_rawBits;
}

Fixed::Fixed( const float _number ) {
//	std::cout << "Float constructor called" << std::endl;
	this->_number = std::roundf( _number * (1 << this->_rawBits) );
}

Fixed::Fixed( const Fixed &obj ) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator = ( const Fixed &obj ) {
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = obj.getRawBits();
	return ( *this );
}

bool Fixed::operator > ( const Fixed &obj ) const {
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator < ( const Fixed &obj ) const {
	return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator <= ( const Fixed &obj ) const {
	return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator >= ( const Fixed &obj ) const {
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator == ( const Fixed &obj ) const {
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator != ( const Fixed &obj ) const {
	return (this->toFloat() != obj.toFloat());
}

Fixed Fixed::operator + ( const Fixed &obj ) const {
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator - ( const Fixed &obj ) const {
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator * ( const Fixed &obj ) const {
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator / ( const Fixed &obj ) const {
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed Fixed::operator ++ ( int ) {
	float temp = this->toFloat();
	++this->_number;
	return (Fixed(temp));
}

Fixed Fixed::operator ++ ( void ) {
	++this->_number;
	return (Fixed(this->toFloat()));
}

Fixed Fixed::operator -- ( int ) {
	float temp = this->toFloat();
	--this->_number;
	return (Fixed(temp));
}

Fixed Fixed::operator -- ( void ) {
	--this->_number;
	return (Fixed(this->toFloat()));
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

Fixed &Fixed::min(Fixed &objA, Fixed &objB) {
	return (objA <= objB ? objA : objB);
}

const Fixed &Fixed::min(const Fixed &objA, const Fixed &objB) {
	return (objA <= objB ? objA : objB);
}
Fixed &Fixed::max(Fixed &objA, Fixed &objB) {
	return (objA >= objB ? objA : objB);
}

const Fixed &Fixed::max(const Fixed &objA, const Fixed &objB) {
	return (objA >= objB ? objA : objB);
}

int Fixed::getRawBits( void ) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_number );
}

void Fixed::setRawBits( int const raw ) {
//	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}