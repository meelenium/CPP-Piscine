//
// Created by Tile Tyuuki on 10.06.2022.
//

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

//includes
# include <iostream>
# include <cstring>
# include <iomanip>

//class
class Contact
{
public:
	void showContactPrev( void ) const;
	void showContactInfo( void ) const;
	bool setContact( size_t contactCount );

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string _nickName;
	std::string _darkSecret;
	std::string _phoneNumber;
	size_t _index;

	void _printContact( std::string field ) const;
	void _writeContactData( const char *message, std::string &field );
};

#endif
