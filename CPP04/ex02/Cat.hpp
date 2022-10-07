//
// Created by Tile Tyuuki on 04.10.2022.
//

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
	Cat( void );
	Cat( const Cat &obj );
	~Cat();

	Cat &operator = (const Cat &obj);

	void makeSound( void ) const;

	std::string getType( void ) const;
	Brain *getBrain( void ) const;

private:
	Brain *_brain;

};

#endif
