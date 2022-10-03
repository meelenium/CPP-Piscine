//
// Created by Tile Tyuuki on 02.10.2022.
//

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setFields("NoName", 100, 50, 20);
}

ScavTrap::ScavTrap ( const std::string _name ) {
	std::cout << "ScavTrap main constructor called" << std::endl;
	this->setFields(_name, 100, 50, 20);
}

ScavTrap::ScavTrap( const ScavTrap &obj ) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator = ( const ScavTrap &obj ) {
	std::cout << "ScavTrap overload operator \"=\" called" << std::endl;
	this->setName(obj._name);
	return ( *this );
}

void ScavTrap::attack( const std::string& target ) {
	if( !this->getHitPoints() || !this->getEnergyPoints() ) {
		std::cout << "I can't do something, because i don't have hit points or energy point..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " <<  this->getName()
			  << " attacks " << target
			  << " causing " << this->getAttackDamage()
			  << " points of damage!" << std::endl;
	this->energyDecrement();
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap got Gate keeper" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}