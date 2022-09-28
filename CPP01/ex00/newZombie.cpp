#include "Zombie.hpp"

Zombie *newZombie( std::string _name ) {
	Zombie *zombie = new Zombie( _name );
	return ( zombie );
}