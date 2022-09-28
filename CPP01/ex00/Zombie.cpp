#include "Zombie.hpp"

Zombie::Zombie( std::string _name ) {
	this->_name = _name;
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName( std::string _name ) {
	this->_name = _name;
}


std::string Zombie::getName( void ) {
	return ( this->_name );
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << ": " << "die..." << std::endl;
}