//
// Created by Tile Tyuuki on 02.10.2022.
//

#include "ClapTrap.class.hpp"

int main ( void ) {
	ClapTrap a("Karim");

	a.attack("Artem");
	a.takeDamage(5);
	a.beRepaired(2);
	a.takeDamage(2);
	a.takeDamage(5);
	a.beRepaired(10);
}
