//
// Created by Tile Tyuuki on 21.09.2022.
//

#ifndef HARL_HPP
# define HARL_HPP

//includes
# include <iostream>
# include <cstring>

//classes
class Harl {

public:
	//constructors and destructors
	Harl( void );
	~Harl();

	//members functions
	void    complain( std::string level );

private:
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );

};

#endif
