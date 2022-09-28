//
// Created by Tile Tyuuki on 18.09.2022.
//

#ifndef SUBFILE_HPP
#define SUBFILE_HPP

//includes
# include <iostream>
# include <cstring>
# include <fstream>

//classes
class SubFile {

public:
	//constructors and destructors
	SubFile( std::string _filename, std::string _find, std::string _replace );
	~SubFile( void );

	//members methods
	void replaceAndWrite( void );

private:
	std::string _filename;
	std::string _find;
	std::string _replace;

	void searchAndReplaceSubString( std::string &buf );
};

#endif
