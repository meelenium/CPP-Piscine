//
// Created by Tile Tyuuki on 18.09.2022.
//

#ifndef HUMAN_HPP
# define HUMAN_HPP

//includes
# include <iostream>
# include <cstring>
# include "Weapon.hpp"

//classes
class HumanA {

public:
	//constructors and destructors
	HumanA( std::string _name, Weapon &_weapon );
	~HumanA( void );

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
