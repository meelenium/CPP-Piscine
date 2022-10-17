//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
//#include <unistd.h>

int main( void ) {


	std::cout << "PresidentialPardonForm class tests" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	try {
		const PresidentialPardonForm form;
		PresidentialPardonForm copyForm(form);
		Bureaucrat bureaucrat("Karim", 5);

		std::cout << std::endl;

		copyForm.setTarget("Black lives matter !!!!!!");
		bureaucrat.signForm(copyForm);
		bureaucrat.executeForm(copyForm);
		copyForm.setStatus(false);
		copyForm.beSigned(bureaucrat);
		copyForm.execute(bureaucrat);

		std::cout << std::endl;

	} catch (const std::exception &ex) {

		std::cout << std::endl;

		std::cout << "Exception: " << ex.what() << std::endl;

		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "RobotomyRequestForm class tests" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;

	try {
		const RobotomyRequestForm form;
		RobotomyRequestForm copyForm(form);
		Bureaucrat bureaucrat("Karim", 5);

		std::cout << std::endl;

		copyForm.setTarget("Black lives matter !!!!!!");
		bureaucrat.signForm(copyForm);
		bureaucrat.executeForm(copyForm);
		copyForm.setStatus(false);
		copyForm.beSigned(bureaucrat);
		copyForm.execute(bureaucrat);
//		sleep(1);
		copyForm.execute(bureaucrat);
//		sleep(2);
		copyForm.execute(bureaucrat);
//		sleep(1);
		copyForm.execute(bureaucrat);
//		sleep(1);
		copyForm.execute(bureaucrat);
//		sleep(2);

		std::cout << std::endl;

	} catch (const std::exception &ex) {

		std::cout << std::endl;

		std::cout << "Exception: " << ex.what() << std::endl;

		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "ShrubberyCreationForm class tests" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	try {
		const ShrubberyCreationForm form;
		ShrubberyCreationForm copyForm(form);
		Bureaucrat bureaucrat("Karim", 5);

		std::cout << std::endl;

		copyForm.setTarget("Black lives matter !!!!!!");
		bureaucrat.signForm(copyForm);
		bureaucrat.executeForm(copyForm);
		copyForm.setStatus(false);
		copyForm.beSigned(bureaucrat);
		copyForm.execute(bureaucrat);

		std::cout << std::endl;

	} catch (const std::exception &ex) {

		std::cout << std::endl;

		std::cout << "Exception: " << ex.what() << std::endl;

		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Fail tests" << std::endl;
	std::cout << std::endl;

	//	Form forAbstractTest; // for abstract test

	std::cout << "PresidentialPardonForm class tests" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	try {
		const PresidentialPardonForm form;
		PresidentialPardonForm copyForm(form);
		Bureaucrat bureaucrat("Karim", 26);

		std::cout << std::endl;

		copyForm.setTarget("Black lives matter !!!!!!");
		bureaucrat.signForm(copyForm);
		bureaucrat.executeForm(copyForm);
		copyForm.setStatus(false);
		copyForm.beSigned(bureaucrat);
		copyForm.execute(bureaucrat);

		std::cout << std::endl;

	} catch (const std::exception &ex) {

		std::cout << std::endl;

		std::cout << "Exception: " << ex.what() << std::endl;

		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "RobotomyRequestForm class tests" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;

	try {
		const RobotomyRequestForm form;
		RobotomyRequestForm copyForm(form);
		Bureaucrat bureaucrat("Karim", 76);

		std::cout << std::endl;

		copyForm.setTarget("Black lives matter !!!!!!");
		bureaucrat.signForm(copyForm);
		bureaucrat.executeForm(copyForm);
		copyForm.setStatus(false);
		copyForm.beSigned(bureaucrat);
		copyForm.execute(bureaucrat);
//		sleep(1);
		copyForm.execute(bureaucrat);
//		sleep(2);
		copyForm.execute(bureaucrat);
//		sleep(1);
		copyForm.execute(bureaucrat);
//		sleep(1);
		copyForm.execute(bureaucrat);
//		sleep(2);

		std::cout << std::endl;

	} catch (const std::exception &ex) {

		std::cout << std::endl;

		std::cout << "Exception: " << ex.what() << std::endl;

		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "ShrubberyCreationForm class tests" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	try {
		const ShrubberyCreationForm form;
		ShrubberyCreationForm copyForm(form);
		Bureaucrat bureaucrat("Karim", 146);

		std::cout << std::endl;

		copyForm.setTarget("Black lives matter !!!!!!");
		bureaucrat.signForm(copyForm);
		bureaucrat.executeForm(copyForm);
		copyForm.setStatus(false);
		copyForm.beSigned(bureaucrat);
		copyForm.execute(bureaucrat);

		std::cout << std::endl;

	} catch (const std::exception &ex) {

		std::cout << std::endl;

		std::cout << "Exception: " << ex.what() << std::endl;

		std::cout << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << std::endl;

}
