//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
						: _name( "NoName" ), _grade(75) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string _name, short _grade )
						: _name( ( !_name.length() ) ? "NoName" : _name ), _grade( _grade ) {
	std::cout << "Bureaucrat main constructor called" << std::endl;
	if( _grade > 150 ) {
		throw GradeTooLowException();
	} else if( _grade < 1 ) {
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat &obj ) : _name( obj.getName() ) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = obj;
}

Bureaucrat &Bureaucrat::operator = ( const Bureaucrat &obj ) {
	std::cout << "Bureaucrat overload operator \"=\" called" << std::endl;
	this->_grade = obj._grade;
	return ( *this );
}

std::ostream &operator << ( std::ostream &os, const Bureaucrat &obj ) {
	std::cout << "Bureaucrat overload operator \"<<\" called" << std::endl;
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return ( os );
}

void Bureaucrat::incrementGrade( void ) {
	if( _grade == 1 ) {
		throw GradeTooHighException();
	}
	this->_grade--;
}

void Bureaucrat::decrementGrade( void ) {
	if( _grade == 150 ) {
		throw GradeTooLowException();
	}
	this->_grade++;
}

void Bureaucrat::signForm( Form &form ) {
	if( form.getStatus() ) {
		std::cout << "Form " << form.getName()
				  << " has been signed" << std::endl;
		return ;
	} else if( this->getGrade() > form.getGradeForSign() ) {
		std::cout << this->getName()
				<< " couldn’t sign "
				<< form.getName()
				<< " because Bureaucrat's grade < grade of form "
				<< std::endl;
	} else {
		std::cout << this->getName()
				<< " has signed form "
				<< form.getName()
				<< std::endl;
		form.setStatus( true );
	}
}

void Bureaucrat::executeForm( const Form &form ) {
	if( this->getGrade() > form.getGradeForExecute() ) {
		std::cout << this->getName()
				  << " couldn’t execute "
				  << form.getName()
				  << " because Bureaucrat's grade < grade of form "
				  << std::endl;
	} else if( !form.getStatus() ) {
		std::cout << "Form is not sign" << std::endl;
		return;
	} else {
		std::cout << this->getName() << " is executing " << form.getName() << std::endl;
		form.execute( *this );
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ( "[ERROR] - grade < 1" );
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ( "[ERROR] - grade > 150" );
}

std::string Bureaucrat::getName( void ) const {
	return ( this->_name );
}

short Bureaucrat::getGrade( void ) const {
	return ( this->_grade );
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destructor called" << std::endl;
}