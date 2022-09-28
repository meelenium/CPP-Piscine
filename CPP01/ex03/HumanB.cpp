//
// Created by Tile Tyuuki on 18.09.2022.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) {
	this->_name = _name;
	this->_weapon = nullptr;
}

void HumanB::attack() {
	std::cout << this->_name
	<< " attacks with their "
	<< this->_weapon->getType()
	<< std::endl;
}

void HumanB::setWeapon( Weapon &_weapon ) {
	this->_weapon = &_weapon;
}

void HumanB::setName( std::string _name ) {
	this->_name = _name;
}

std::string HumanB::getName( void ) {
	return (this->_name);
}

HumanB::~HumanB( void ) { }
