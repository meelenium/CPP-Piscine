//
// Created by Tile Tyuuki on 10.06.2022.
//

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

//includes
# include <iostream>
# include "Contact.class.hpp"

//class
class PhoneBook
{
public:
	PhoneBook( void );
	~PhoneBook( void );

	void addContact( void );
	void searchContact( void );
	void exitTheBook( void ) const;

private:
	Contact	_contact[8];
	size_t	_contactCount;

	void _welcomeMessage( void ) const;
	void _showInfo( void );
};

#endif
