//
// Created by Tile Tyuuki on 04.10.2022.
//

#ifndef ANIMALWORNG_HPP
# define ANIMALWORNG_HPP

# include <iostream>
# include <string>

class AnimalWrong {

public:
	AnimalWrong( void );
	AnimalWrong( const AnimalWrong &obj );
	~AnimalWrong();

	AnimalWrong &operator = (const AnimalWrong &obj);

	void makeSound( void ) const;
	std::string getType( void ) const;

protected:
	std::string type;

};

#endif
