//
// Created by Tile Tyuuki on 24.10.2022.
//

#include <iostream>
#include "Serelization.hpp"
#include "someheader.hpp"

int main( void ) {
	Data data;
	data.name = "Karim";
	data.age = 19;
	Data *ptr = &data;
	Serelization ser;

	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Before serialize struct data has(variable \"data\"): " << std::endl
				<< "Name:" << data.name << std::endl
				<< "Age:" << data.age << std::endl
				<< "Address: " << ptr << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	uintptr_t result = ser.serialize(ptr);
	std::cout << "After serialize data uintptr value: " << result << std::endl
			  << "Address: " << &result << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	Data *dataPtr = ser.deserialize(result);
	std::cout << "After deserialize struct data has(variable \"dataPtr\"): " << std::endl
			  << "Name:" << dataPtr->name << std::endl
			  << "Age:" << dataPtr->age << std::endl
			  << "Address: " << dataPtr << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}