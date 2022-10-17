//
// Created by Tile Tyuuki on 17.10.2022.
//

#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern( const Intern &obj ) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = obj;
}

Intern &Intern::operator = ( const Intern &obj ) {
	std::cout << "Intern overload operator \"=\" called" << std::endl;
	( void ) obj;
	return ( *this );
}

Form *Intern::getPresidential( std::string target ) {
	Form *form = new PresidentialPardonForm();
	form->setTarget( target );
	return ( form );
}

Form *Intern::getRobotomy( std::string target ) {
	Form *form = new RobotomyRequestForm();
	form->setTarget( target );
	return ( form );
}

Form *Intern::getShrubbery( std::string target ) {
	Form *form = new ShrubberyCreationForm();
	form->setTarget( target );
	return ( form );
}


Form *Intern::makeForm( std::string name, std::string target ) {
	std::string nameList[] = {
			"presidential pardon",
			"robotomy request",
			"shrubbery creation"
	};
	Form *(Intern::*formList[])( std::string target ) = {
		&Intern::getPresidential,
		&Intern::getRobotomy,
		&Intern::getShrubbery
	};

	for(int i = 0; i < 3; i++) {
		if(nameList[i] == name) {
			return ((this->*formList[i])( target ));
		}
	}
	throw FormNotfoundException();
}

const char *Intern::FormNotfoundException::what() const throw() {
	return ( "Form not found" );
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}
