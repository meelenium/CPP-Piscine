//
// Created by Tile Tyuuki on 02.10.2022.
//

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main ( void ) {
	std::cout << "ClapTrap tests" << std::endl;
	ClapTrap a("Karim");

	a.attack("Artem");
	a.takeDamage(5);
	a.beRepaired(2);
	a.takeDamage(2);
	a.takeDamage(5);
	a.beRepaired(10);

	std::cout << std::endl << "ScavTrap tests" << std::endl;
	ScavTrap b("Artem");

	b.attack("Karim");
	b.takeDamage(50);
	b.beRepaired(20);
	b.takeDamage(20);
	b.takeDamage(50);
	b.beRepaired(100);
	b.guardGate();
}
