//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak delete i;
	delete i;
	Cat test;
	Cat obj = test;
	return 0;
}