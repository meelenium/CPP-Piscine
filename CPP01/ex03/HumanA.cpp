//
// Created by Tile Tyuuki on 18.09.2022.
//

#include "HumanA.hpp"

HumanA::HumanA( std::string _name, Weapon &_weapon ) {
	this->_name = _name;
	this->_weapon = &_weapon;
}

void HumanA::attack() {
	std::cout << this->_name
			  << " attacks with their "
			  << this->_weapon->getType()
			  << std::endl;
}

void HumanA::setWeapon( Weapon &_weapon ) {
	this->_weapon = &_weapon;
}

void HumanA::setName( std::string _name ) {
	this->_name = _name;
}

std::string HumanA::getName( void ) {
	return (this->_name);
}

HumanA::~HumanA( void ) { }
