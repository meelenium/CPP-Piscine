//
// Created by Tile Tyuuki on 18.09.2022.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) {
	this->_type = _type;
}

void Weapon::setType(std::string _type) {
	this->_type = _type;
}

std::string &Weapon::getType( void ) {
	return (this->_type);
}

Weapon::~Weapon( void ) { }
