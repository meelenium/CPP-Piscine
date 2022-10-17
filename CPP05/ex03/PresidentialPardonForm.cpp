//
// Created by Tile Tyuuki on 12.10.2022.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: Form( "PresidentialPardonForm", 25, 5, "Nothing" ) {
	std::cout << getName() << " default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj )
		: Form(obj.getName(), obj.getGradeForSign(), obj.getGradeForExecute(), obj.getTarget())  {
	std::cout << getName() << " copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm &obj )
	: Form( obj.getName(), obj.getGradeForSign(), obj.getGradeForExecute(), obj.getTarget() ) {
	std::cout << getName() << " main constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator = ( const PresidentialPardonForm &obj ) {
	std::cout << getName() << " overload operator \"=\" called" << std::endl;
	setStatus(obj.getStatus());
	setTarget(obj.getTarget());
	return ( *this );
}

void PresidentialPardonForm::execute( const Bureaucrat &executor ) const {
	if( !getStatus() ) {
		std::cout << "Form is not sign" << std::endl;
		return ;
	} else if( executor.getGrade() > getGradeForExecute() ) {
		throw GradeTooLowException();
	} else {
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox " << std::endl;
	}
}


PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << getName() << " destructor called" << std::endl;
}