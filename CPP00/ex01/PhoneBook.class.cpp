//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : _contactCount( 0 )
{
	this->_welcomeMessage();
}

PhoneBook::~PhoneBook( void ) {  }

void PhoneBook::addContact( void )
{
	if( this->_contact[this->_contactCount % 8].setContact( this->_contactCount ) )
		this->_contactCount++;
}

void PhoneBook::_showInfo( void )
{
	std::cout << "---------------------------------------------" << std::endl
			  << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl
			  << "---------------------------------------------" << std::endl;
	for( size_t index = 0; index < this->_contactCount; index++ )
		this->_contact[index].showContactPrev();
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::searchContact( void )
{
	if( !this->_contactCount )
		std::cout << "PhoneBook is empty.You can add your first contact with - ADD" << std::endl;
	else
	{
		std::string	sIndex;
		int 		index;

		this->_showInfo();
		index = -1;
		while( index <= 0 || index > 8 )
		{
			std::cout << "Enter contact index: ";
			std::getline( std::cin, sIndex );
			if( std::cin.eof() )
			{
				std::cin.clear();
				clearerr(stdin);
				std::cout << std::endl;
			}
			index = atoi( sIndex.c_str() );
		}
		if( index > (int)this->_contactCount )
			std::cout << "Non valid index.Please try again" << std::endl;
		else
			this->_contact[index - 1].showContactInfo();
	}
}

void PhoneBook::exitTheBook( void ) const
{
	std::cout << "See you later..." << std::endl;
	exit ( 0 );
}

void PhoneBook::_welcomeMessage( void ) const
{
	std::cout << std::setw( 40 ) << "Welcome to the Phone Book!" << "You can pick actions:" << std::endl
			  << std::setw( 45 ) << "1 - ADD(Add new contact)." << std::endl
			  << std::setw( 47 ) << "2 - SEARCH(Search contact)." << std::endl
			  << std::setw( 48 ) << "3 - EXIT(exit at Phone Book." << std::endl;
}