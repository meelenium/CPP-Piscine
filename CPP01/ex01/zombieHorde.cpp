//
// Created by Tile Tyuuki on 17.09.2022.
//

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
	Zombie *zombie = new Zombie[N];

	for( int i = 0; i < N; i++ ) {
		zombie[i].setName(name);
	}
	return (zombie);
}