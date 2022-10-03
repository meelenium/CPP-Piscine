//
// Created by Tile Tyuuki on 03.10.2022.
//

#include "FragTrap.class.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->setFields("NoName", 100, 100, 30);
}

FragTrap::FragTrap ( const std::string _name ) {
	std::cout << "FragTrap " << _name << " main constructor called" << std::endl;
	this->setFields(_name, 100, 100, 30);
}

FragTrap::FragTrap( const FragTrap &obj ) {
	std::cout << "FragTrap " << this->getName() << " copy constructor called" << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator = ( const FragTrap &obj ) {
	this->setName( obj._name );
	return (*this);
}

void FragTrap::highFivesGuys( void ) {
	if( !this->getHitPoints() || !this->getEnergyPoints() ) {
		std::cout << "I can't do something, because i don't have hit points or energy point..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " high fives guys" << std::endl;
	this->energyDecrement();
}

void FragTrap::attack( const std::string& target ) {
	if( !this->getHitPoints() || !this->getEnergyPoints() ) {
		std::cout << "I can't do something, because i don't have hit points or energy point..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " <<  this->getName()
			  << " attacks " << target
			  << " causing " << this->getAttackDamage()
			  << " points of damage!" << std::endl;
	this->energyDecrement();
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}