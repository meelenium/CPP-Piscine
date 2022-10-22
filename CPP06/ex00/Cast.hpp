//
// Created by Tile Tyuuki on 18.10.2022.
//

#ifndef CAST_HPP
#define CAST_HPP

# include <iostream>
# include <string>

# define DEFAULT 0
# define INFF 1
# define NANF 2
# define INF 3
# define NAN 4

class Cast {

public:
	Cast( void );
	Cast( const Cast &obj );
	Cast( std::string _variable );
	~Cast( void );

	Cast &operator = ( const Cast &obj );

	void toChar( void );
	void toFloat( void );
	void toDouble( void );
	void toInt( void );

	void setVariable( std::string _variable );
	std::string getVariable( void ) const;

private:
	std::string _variable;
	int _flag;

	int _getFlag( void );

};

#endif
