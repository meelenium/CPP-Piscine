//
// Created by Tile Tyuuki on 10.06.2022.
//

#include "PhoneBook.class.hpp"

int main( void )
{
	std::string	line;
	PhoneBook book;

	while( true )
	{
		line.clear();
		std::cin.clear();
		std::cout << "command_> ";
		std::getline( std::cin, line );
		if( std::cin.eof() )
		{
			std::cin.clear();
			clearerr( stdin );
			std::cout << std::endl;
			continue ;
		}
		else if( line == "ADD" )
			book.addContact();
		else if( line == "SEARCH" )
			book.searchContact();
		else if( line == "EXIT" )
			book.exitTheBook();
		else if( !line.empty() )
			std::cout << "Command not found.Available commands: ADD, SEARCH, EXIT." << std::endl;
	}
	return ( 0 );
}