//
// Created by Tile Tyuuki on 04.10.2022.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AnimalWrong.hpp"
#include "CatWrong.hpp"
#include "DogWrong.hpp"

int main() {

	std::cout << "Right tests" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl << "Wrong tests" << std::endl;
	const AnimalWrong* metaWrong = new AnimalWrong();
	const AnimalWrong* jWrong = new DogWrong();
	const AnimalWrong* iWrong = new CatWrong();
	std::cout << jWrong->getType() << " " << std::endl;
	std::cout << iWrong->getType() << " " << std::endl;
	iWrong->makeSound(); //will output the cat sound! j->makeSound();
	jWrong->makeSound();
	metaWrong->makeSound();

	delete metaWrong;
	delete iWrong;
	delete jWrong;
	return 0;
}