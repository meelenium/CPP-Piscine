//
// Created by Tile Tyuuki on 12.10.2022.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
		: Form( "ShrubberyCreationForm", 145, 137, "Nothing" ) {
	std::cout << getName() << " default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj )
		: Form(obj.getName(), obj.getGradeForSign(), obj.getGradeForExecute(), obj.getTarget())  {
	std::cout << getName() << " copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm &obj )
		: Form( obj.getName(), obj.getGradeForSign(), obj.getGradeForExecute(), obj.getTarget() ) {
	std::cout << getName() << " main constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &obj ) {
	std::cout << getName() << " overload operator \"=\" called" << std::endl;
	setStatus(obj.getStatus());
	setTarget(obj.getTarget());
	return ( *this );
}

void ShrubberyCreationForm::execute( const Bureaucrat &executor ) const {
	if( !getStatus() ) {
		std::cout << "Form is not sign" << std::endl;
		return ;
	} else if( executor.getGrade() > getGradeForExecute() ) {
		throw GradeTooLowException();
	} else {
		std::ofstream out;
		std::string fileName( getTarget() + "_shrubbery" );

		out.open(fileName);
		if(out.is_open()) {
			out << "       _-_" << std::endl
				<< "    /~~   ~~\\" << std::endl
				<< " /~~         ~~\\" << std::endl
				<< "{               }" << std::endl
				<< " \\  _-     -_  /" << std::endl
				<< "   ~  \\\\ //  ~" << std::endl
				<< "_- -   | | _- _" << std::endl
				<< "  _ -  | |   -_" << std::endl
				<< "      // \\\\" << std::endl;
			std::cout << getName() << " form has executed" << std::endl;
		} else {
			std::cout << "[ERROR]\nCan't open the file" << std::endl;
		}
	}
}


ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << getName() << " destructor called" << std::endl;
}