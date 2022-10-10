//
// Created by Tile Tyuuki on 10.10.2022.
//

#include "Form.hpp"

Form::Form( void )
			: _name( "NoName" ), _status( 0 ), _gradeForSign( 75 ), _gradeForExecute( 50 ) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form( const std::string _name, const short _gradeForSign, const short _gradeForExecute )
		: _name( _name ), _status( 0 ), _gradeForSign( _gradeForSign ), _gradeForExecute( _gradeForExecute ) {
	if( _gradeForSign < 1 || _gradeForExecute < 1 ) {
		throw GradeTooHighException();
	} else if( _gradeForSign > 150 || _gradeForExecute > 150 ) {
		throw GradeTooLowException();
	}
	std::cout << "Form main constructor called" << std::endl;
}

Form::Form( const Form &obj )
		: _name( obj.getName() ), _status( obj.getStatus() ),
		_gradeForSign( obj.getGradeForSign() ), _gradeForExecute( obj.getGradeForExecute() ) {
	std::cout << "Form copy constructor called" << std::endl;
}

std::ostream &operator << ( std::ostream &os, const Form &obj ) {
	std::cout << "Form overload operator \"<<\" called" << std::endl;
	os << "Form name: " << obj.getName() << std::endl
		<< "Form status: " << obj.getStatus() << std::endl
		<< "Form grade for sign: " << obj.getGradeForSign() << std::endl
		<< "Form grade for execute: " << obj.getGradeForExecute() << std::endl;
	return ( os );
}

Form &Form::operator = ( const Form &obj ) {
	std::cout << "Form overload operator \"=\" called" << std::endl;
	this->setStatus( obj.getStatus() );
	return ( *this );
}

void Form::beSigned( Bureaucrat &person ) {
	if( this->getStatus() ) {
		std::cout << "Form " << this->getName()
				<< " has been signed" << std::endl;
		return ;
	} else if( person.getGrade() > this->getGradeForSign() ) {
		throw GradeTooLowException();
	} else {
		std::cout << "Form " << this->getName()
				<< " has signed by " << person.getName() << std::endl;
		this->setStatus( 1 );
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return ( "Grade too high" );
}

const char *Form::GradeTooLowException::what() const throw() {
	return ( "Grade too low" );
}

std::string Form::getName( void ) const {
	return ( this->_name );
}

bool Form::getStatus( void ) const {
	return ( this->_status );
}

void Form::setStatus( bool _status ) {
	this->_status = _status;
}

short Form::getGradeForSign( void ) const {
	return ( this->_gradeForSign );
}

short Form::getGradeForExecute( void ) const {
	return ( this->_gradeForExecute );
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}