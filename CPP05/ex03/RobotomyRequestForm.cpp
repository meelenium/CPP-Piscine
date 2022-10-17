//
// Created by Tile Tyuuki on 12.10.2022.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
		: Form( "RobotomyRequestForm", 72, 45, "Nothing" ) {
	std::cout << getName() << " default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj )
		: Form(obj.getName(), obj.getGradeForSign(), obj.getGradeForExecute(), obj.getTarget())  {
	std::cout << getName() << " copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm &obj )
		: Form( obj.getName(), obj.getGradeForSign(), obj.getGradeForExecute(), obj.getTarget() ) {
	std::cout << getName() << " main constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator = ( const RobotomyRequestForm &obj ) {
	std::cout << getName() << " overload operator \"=\" called" << std::endl;
	setStatus(obj.getStatus());
	setTarget(obj.getTarget());
	return ( *this );
}

void RobotomyRequestForm::execute( const Bureaucrat &executor ) const {
	if( !getStatus() ) {
		std::cout << "Form is not sign" << std::endl;
		return ;
	} else if( executor.getGrade() > getGradeForExecute() ) {
		throw GradeTooLowException();
	} else {
		srand( time( NULL ) );
		if( ( rand() % 2 ) ) {
			std::cout << getTarget() << " has been robotomized" << std::endl;
		} else {
			std::cout << "robotomy failed" << std::endl;
		}
	}
}


RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << getName() << " destructor called" << std::endl;
}