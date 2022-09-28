//
// Created by Tile Tyuuki on 18.09.2022.
//

#include "SubFile.hpp"

SubFile::SubFile( std::string _filename, std::string _find, std::string _replace ) {
	this->_filename = _filename;
	this->_find = _find;
	this->_replace = _replace;
}

void SubFile::replaceAndWrite( void ) {
	std::ifstream in;
	std::ofstream out;
	std::string buf;
	std::string oldBuf;
	std::string outfile;

	outfile = this->_filename + ".replace";
	in.open(this->_filename);
	out.open(outfile);
	if( !in.is_open() || !out.is_open() ) {
		std::cout << "Error open file" << std::endl;
		exit (1);
	}
	while( std::getline(in, oldBuf) ) {
		oldBuf += "\n";
		this->searchAndReplaceSubString( oldBuf );
		buf += oldBuf;
	}
	out << buf;
	in.close();
	out.close();
}

void SubFile::searchAndReplaceSubString( std::string &buf ) {
	size_t found;
	int flag;

	found = 0;
	flag = 0;
	while( true ) {
		found = buf.find(this->_find, (flag == 0) ? found : found + 1);
		if(found != std::string::npos) {
			buf.erase(found, this->_find.length());
			buf.insert(found, this->_replace);
			flag++;
		} else {
			break ;
		}
	}
}

SubFile::~SubFile() { }
