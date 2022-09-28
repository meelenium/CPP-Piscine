//
// Created by Tile Tyuuki on 17.09.2022.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

//includes
# include <iostream>
# include <cstring>

class Zombie {

public:
	Zombie( std::string name );
	Zombie( void );
	~Zombie( void );

	void announce( void );
	void setName( std::string _name );
	std::string getName( void );

private:
	std::string _name;

};

Zombie*    zombieHorde( int N, std::string name );

#endif
