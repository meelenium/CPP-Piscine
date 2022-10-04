//
// Created by Tile Tyuuki on 04.10.2022.
//

#ifndef CATWRONG_HPP
# define CATWRONG_HPP

# include "AnimalWrong.hpp"

class CatWrong : public AnimalWrong {

public:
	CatWrong( void );
	CatWrong( const CatWrong &obj );
	~CatWrong();

	CatWrong &operator = (const CatWrong &obj);

	void makeSound( void ) const;
	std::string getType( void ) const;

};

#endif
