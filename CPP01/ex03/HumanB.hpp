//
// Created by Tile Tyuuki on 18.09.2022.
//

#ifndef HUMANB_HPP
# define HUMANB_HPP

//includes
# include <iostream>
# include <cstring>
#include "Weapon.hpp"

//classes
class HumanB {

public:
	//constructors and destructors
	HumanB( std::string _name );
	~HumanB( void );

	//members methods
	void attack( void );

	//setters and getters
	void setWeapon( Weapon &_weapon );
	void setName( std::string name );
	std::string getName( void );

private:
	Weapon *_weapon;
	std::string _name;

};

#endif
