//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
						: _name( "NoName" ), _grade(75) {
}

Bureaucrat::Bureaucrat( const std::string _name, short _grade )
						: _name( ( !_name.length() ) ? "NoName" : _name ), _grade( _grade ){
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) {
	*this = obj;
}

Bureaucrat &Bureaucrat::operator = ( const Bureaucrat &obj ) {
	this->_grade = obj._grade;
	return ( *this );
}

std::ostream &operator << ( std::ostream &os, const Bureaucrat &obj ) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return ( os );
}

void Bureaucrat::incrementGrade( void ) {
	this->_grade--;
}

void Bureaucrat::decrementGrade( void ) {
	this->_grade++;
}

std::string Bureaucrat::getName( void ) const {
	return ( this->_name );
}

short Bureaucrat::getGrade( void ) const {
	return ( this->_grade );
}

Bureaucrat::~Bureaucrat( void ) {

}