//
// Created by Tile Tyuuki on 16.09.2022.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

//includes
# include <iostream>
# include <cstring>

//classes
class Zombie {

public:
	Zombie( std::string name );
	~Zombie( void );

	void announce( void );
	void setName( std::string _name );
	std::string getName( void );

private:
	std::string _name;
};

Zombie *newZombie( std::string _name );
void randomChump( std::string name );

#endif
