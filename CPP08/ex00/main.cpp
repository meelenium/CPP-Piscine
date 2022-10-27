//
// Created by Tile Tyuuki on 27.10.2022.
//

#include "easyfind.hpp"
#include <vector>

int main( void ) {

	std::cout << "If we have found test" << std::endl;
	std::cout << "=====================" << std::endl;
	try {
		std::vector<int> vec(3, 5);
		std::vector<int>::iterator it = easyFind(vec, 5);
		std::cout << "Found: " << *it << std::endl;
	} catch ( const std::out_of_range &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "=====================" << std::endl;
	std::cout << std::endl;

	std::cout << "If we have not found test" << std::endl;
	std::cout << "=====================" << std::endl;
	try {
		std::vector<int> vec(3, 5);
		easyFind(vec, 1);
	} catch ( const std::out_of_range &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "=====================" << std::endl;

}