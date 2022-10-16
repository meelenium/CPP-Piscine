//
// Created by Tile Tyuuki on 08.10.2022.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {

	try {
		PresidentialPardonForm test;
		test.setTarget("Black lives matter !!!!!!!!!!!");
		Bureaucrat bureaucrat("Karim", 10);
		test.execute(bureaucrat);
	} catch (const std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}
