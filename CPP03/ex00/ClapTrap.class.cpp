//
// Created by Tile Tyuuki on 02.10.2022.
//

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_name = "NoName";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap ( const std::string _name ) {
	std::cout << "Main constructor called" << std::endl;
	if( _name == "" ) {
		this->_name = "NoName";
	} else {
		this->_name = _name;
	}
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator = ( const ClapTrap &obj ) {
	std::cout << "Overload operator \"=\" called" << std::endl;
	this->_name = obj._name;
	return (*this);
}

void ClapTrap::attack( const std::string& target ) {
	if( !this->_hitPoints || !this->_energyPoints ) {
		std::cout << "I can't do something, because i don't have hit points or energy point..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " <<  this->_name
	<< " attacks " << target
	<< " causing " << this->_attackDamage
	<< " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if( !this->_hitPoints ) {
		std::cout << "Oh i don't have hit point, therefore i can't take any damage" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage" << std::endl;
	this->_hitPoints -= amount;
	if(this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if( !this->_hitPoints || !this->_energyPoints ) {
		std::cout << "I can't do something, because i don't have hit points or energy point..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name <<
	" has repaired " << amount
	<<  " health" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
