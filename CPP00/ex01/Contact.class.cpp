//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "Contact.class.hpp"

bool Contact::setContact( size_t contactCont )
{
	std::cout << std::endl << "Fields can't empty.Watch out for this..." << std::endl;
	this->_index = contactCont % 8 + 1;
	this->_writeContactData( "Enter your first name: ", this->_firstName );
	this->_writeContactData( "Enter your last name: ", this->_lastName );
	this->_writeContactData( "Enter your nickname: ", this->_nickName );
	this->_writeContactData( "Enter your dark secret: " ,this->_darkSecret );
	this->_writeContactData( "Enter your phone number: ", this->_phoneNumber );
	if( contactCont == 8 )
		return ( false );
	return ( true );
}

void Contact::showContactPrev( void ) const
{
	std::cout << "|";
	std::cout << std::setw( 10 ) << this->_index;
	std::cout << "|";
	this->_printContact( this->_firstName );
	this->_printContact( this->_lastName );
	this->_printContact( this->_nickName );
	std::cout << std::endl;
}

void Contact::showContactInfo( void ) const
{
	std::cout << std::endl;
	std::cout 	<< "Index: " << this->_index << std::endl
				<< "First Name: " << this->_firstName << std::endl
				<< "Last Name: " << this->_lastName << std::endl
				<< "Nickname: " << this->_nickName << std::endl
				<< "Dark Secret: " << this->_darkSecret << std::endl
				<< "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << std::endl;
}

void Contact::_printContact( std::string field ) const
{
	if( field.length() > 10 )
		std::cout << std::setw( 9 ) << field.substr( 0, 9 ) << ".";
	else
		std::cout << std::setw( 10 ) << field;
	std::cout << "|";
}

void Contact::_writeContactData( const char *message, std::string &field )
{
	bool flag;

	flag = true;
	while( flag )
	{
		std::cout << message;
		std::getline(std::cin, field);
		if( std::cin.eof() )
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue ;
		}
		else if( field.empty() )
			continue ;
		else
			flag = false;
	}
}