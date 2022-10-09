//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"

int main( void ) {

	std::cout << std::endl << "Test if grade < 1";
	std::cout << std::endl << "-------------------------" << std::endl << std::endl;

	try {
		Bureaucrat first("Artem", 1);
		std::cout << std::endl << first << std::endl << std::endl;
		first.incrementGrade();
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl << "Test if grade > 150";
	std::cout << std::endl << "-------------------------" << std::endl << std::endl;

	try {
		Bureaucrat first("Karim", 150);
		std::cout << std::endl << first << std::endl << std::endl;
		first.decrementGrade();
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl << "Test if grade in destructor > 150";
	std::cout << std::endl << "-------------------------" << std::endl << std::endl;

	try {
		Bureaucrat first("Karim", 151);
		std::cout << std::endl << first << std::endl << std::endl;
		first.decrementGrade();
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl << "Test if grade in destructor < 1";
	std::cout << std::endl << "-------------------------" << std::endl << std::endl;

	try {
		Bureaucrat first("Karim", 0);
		std::cout << std::endl << first << std::endl << std::endl;
		first.decrementGrade();
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl << "Right test";
	std::cout << std::endl << "-------------------------" << std::endl << std::endl;

	try {
		Bureaucrat first("Karim", 140);
		std::cout << std::endl << first << std::endl << std::endl;
		first.decrementGrade();
		std::cout << std::endl << first << std::endl << std::endl;
		first.decrementGrade();
		std::cout << std::endl << first << std::endl << std::endl;
		first.decrementGrade();
		std::cout << std::endl << first << std::endl << std::endl;
		first.incrementGrade();
		std::cout << std::endl << first << std::endl << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
}
