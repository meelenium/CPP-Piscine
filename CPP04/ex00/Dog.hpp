//
// Created by Tile Tyuuki on 04.10.2022.
//

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

public:
	Dog( void );
	Dog( const Dog &obj );
	~Dog();

	Dog &operator = (const Dog &obj);

	void makeSound( void ) const;
	std::string getType( void ) const;

};

#endif
