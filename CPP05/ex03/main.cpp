//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ) {

	std::cout << "Wrong test" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	try {
		Intern intern;
		Form *form = intern.makeForm("robotomy reequest", "Bender");
		std::cout << form->getName() << std::endl;
	} catch (std::exception &ex) {
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Right test" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	try {
		Intern intern;
		Form *form = intern.makeForm("shrubbery creation", "Bender");
		std::cout << std::endl << "Form name: " << form->getName() << std::endl
				  << "Form status: " << form->getStatus() << std::endl
				  << "Form grade for sign: " << form->getGradeForSign() << std::endl
				  << "Form grade for execute: " << form->getGradeForExecute() << std::endl;
		delete form;
	} catch (std::exception &ex) {
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;

}
