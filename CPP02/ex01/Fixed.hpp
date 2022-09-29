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
	Fixed ( const int _number );
	Fixed ( const float _number );
	Fixed( const Fixed &obj );
	~Fixed();

	Fixed &operator = ( const Fixed &obj );

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _number;
	static const int _rawBits = 8;

};

std::ostream &operator << ( std::ostream &os, const Fixed &obj );

#endif
