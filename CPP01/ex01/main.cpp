//
// Created by Tile Tyuuki on 17.09.2022.
//

#include "Zombie.hpp"

int main( void ) {
	Zombie *zombie;

	zombie = zombieHorde(15, "Artem");
	for( int i = 0; i < 15; i++ ) {
		std::cout << "Zombie number " << i + 1 << ": ";
		zombie[i].announce();
	}
	delete[] zombie;
}