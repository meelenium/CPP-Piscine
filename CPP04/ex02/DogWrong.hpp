//
// Created by Tile Tyuuki on 04.10.2022.
//

#ifndef DOGWRONG_HPP
# define DOGWRONG_HPP

# include "AnimalWrong.hpp"

class DogWrong : public AnimalWrong {

public:
	DogWrong( void );
	DogWrong( const DogWrong &obj );
	~DogWrong();

	DogWrong &operator = (const DogWrong &obj);

	void makeSound( void ) const;
	std::string getType( void ) const;

};

#endif