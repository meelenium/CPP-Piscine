//
// Created by Tile Tyuuki on 02.10.2022.
//

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <cstring>

class ClapTrap {

public:
	ClapTrap( void );
	ClapTrap ( const std::string _name );
	ClapTrap( const ClapTrap &obj );
	~ClapTrap();

	ClapTrap &operator = ( const ClapTrap &obj );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );


private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

};

#endif
