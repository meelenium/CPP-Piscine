//
// Created by Tile Tyuuki on 18.09.2022.
//

#ifndef WEAPON_HPP
# define WEAPON_HPP

//includes
# include <iostream>
# include <cstring>

//classes
class Weapon {

public:
	//constructors and destructors
	Weapon(std::string _type);
	~Weapon( void );

	//setters and getters
	void setType(std::string _type);
	std::string &getType( void );

private:
	std::string _type;

};

#endif
