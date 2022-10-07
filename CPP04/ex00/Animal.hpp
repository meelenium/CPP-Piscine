//
// Created by Tile Tyuuki on 04.10.2022.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

public:
	Animal( void );
	Animal( const Animal &obj );
	virtual ~Animal();

	Animal &operator = (const Animal &obj);

	virtual void makeSound( void ) const;
	std::string getType( void ) const;

protected:
	std::string type;

};

#endif
