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
	bool operator > ( const Fixed &obj ) const;
	bool operator < ( const Fixed &obj ) const;
	bool operator >= ( const Fixed &obj ) const;
	bool operator <= ( const Fixed &obj ) const;
	bool operator == ( const Fixed &obj ) const;
	bool operator != ( const Fixed &obj ) const;
	Fixed operator + ( const Fixed &obj ) const;
	Fixed operator - ( const Fixed &obj ) const;
	Fixed operator * ( const Fixed &obj ) const;
	Fixed operator / ( const Fixed &obj ) const;
	Fixed operator ++ ( int );
	Fixed operator ++ ( void );
	Fixed operator -- ( int );
	Fixed operator -- ( void );

	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed &min(Fixed &objA, Fixed &objB);
	static const Fixed &min(const Fixed &objA, const Fixed &objB);
	static Fixed &max(Fixed &objA, Fixed &objB);
	static const Fixed &max(const Fixed &objA, const Fixed &objB);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _number;
	static const int _rawBits = 8;

};

std::ostream &operator << ( std::ostream &os, const Fixed &obj );

#endif
