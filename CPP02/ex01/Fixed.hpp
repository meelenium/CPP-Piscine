//
// Created by Tile Tyuuki on 28.09.2022.
//

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed( void );
	Fixed( const Fixed &obj );
	~Fixed();

	Fixed &operator = ( const Fixed &obj );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _number;
	static const int _rawBits = 8;

};

#endif
