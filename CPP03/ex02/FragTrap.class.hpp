//
// Created by Tile Tyuuki on 03.10.2022.
//

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ScavTrap.class.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap( void );
	FragTrap ( const std::string _name );
	FragTrap( const FragTrap &obj );
	~FragTrap();

	FragTrap &operator = ( const FragTrap &obj );

	void highFivesGuys(void);
	void attack( const std::string& target );
};

#endif
