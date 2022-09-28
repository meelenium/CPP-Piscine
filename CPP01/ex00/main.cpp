#include "Zombie.hpp"

int main( void ) {
	Zombie *zombie = newZombie( "Karim" );;

	zombie->announce();
	randomChump( "Nikita" );
	delete( zombie );
}