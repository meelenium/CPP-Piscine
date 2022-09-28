//
// Created by Tile Tyuuki on 18.09.2022.
//

#include <iostream>

int main( void ) {
	std::string variable = "HI THIS IS BRAIN";
	std::string *ptrVariable = &variable;
	std::string &refVariable = variable;

	std::cout << "Address of string: " << &variable << std::endl;
	std::cout << "Address of ptrString: " << ptrVariable << std::endl;
	std::cout << "Address of refString: " << &refVariable << std::endl;

	std::cout << std::endl;
	std::cout << "|--------------------------------|" << std::endl;
	std::cout << std::endl;

	std::cout << "Value of string: " << variable << std::endl;
	std::cout << "Value of ptrString: " << *ptrVariable << std::endl;
	std::cout << "Value of refString: " << refVariable << std::endl;
}