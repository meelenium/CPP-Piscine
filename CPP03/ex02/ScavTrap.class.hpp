//
// Created by Tile Tyuuki on 02.10.2022.
//

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

class ScavTrap: public ClapTrap {

public:
	ScavTrap( void );
	ScavTrap ( const std::string _name );
	ScavTrap( const ScavTrap &obj );
	~ScavTrap();

	ScavTrap &operator = ( const ScavTrap &obj );

	void guardGate();
	void attack( const std::string& target );

};

#endif
