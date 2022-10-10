//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	std::cout << std::endl << "Right tests" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	try {
		std::cout << std::endl;
		Bureaucrat person("Karim", 73);
		Form form("Violence", 75, 1);
		std::cout << std::endl;
		form.beSigned(person);
		form.beSigned(person);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << person << std::endl;
		std::cout << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl << "-----------------------------------" << std::endl;
	try {
		std::cout << std::endl;
		Bureaucrat person("Karim", 73);
		Form form("Violence", 75, 1);
		std::cout << std::endl;
		person.signForm(form);
		person.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << person << std::endl;
		std::cout << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;

	std::cout << std::endl << "Wrong tests" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	try {
		std::cout << std::endl;
		Bureaucrat person("Karim", 73);
		Form form("Violence", 151, 1);
		std::cout << std::endl;
		form.beSigned(person);
		form.beSigned(person);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << person << std::endl;
		std::cout << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << std::endl << ex.what() << std::endl;
	}
	std::cout << std::endl << "-----------------------------------" << std::endl;
	try {
		std::cout << std::endl;
		Bureaucrat person("Karim", 73);
		Form form("Violence", 0, 1);
		std::cout << std::endl;
		person.signForm(form);
		person.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << person << std::endl;
		std::cout << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << std::endl << ex.what() << std::endl;
	}
	std::cout << std::endl << "-----------------------------------" << std::endl;
	try {
		std::cout << std::endl;
		Bureaucrat person("Karim", 76);
		Form form("Violence", 75, 1);
		std::cout << std::endl;
		form.beSigned(person);
		form.beSigned(person);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << person << std::endl;
		std::cout << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << std::endl << ex.what() << std::endl;
	}
	std::cout << std::endl << "-----------------------------------" << std::endl;
	try {
		std::cout << std::endl;
		Bureaucrat person("Karim", 4);
		Form form("Violence", 3, 1);
		std::cout << std::endl;
		person.signForm(form);
		person.signForm(form);
		std::cout << std::endl;
		std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << person << std::endl;
		std::cout << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << std::endl << ex.what() << std::endl;
	}
	std::cout << std::endl << "-----------------------------------" << std::endl;
}
