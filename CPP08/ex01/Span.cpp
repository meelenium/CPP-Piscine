//
// Created by Tile Tyuuki on 28.10.2022.
//

#include "Span.hpp"

Span::Span( void ) {
	this->_maxSize = 0;
}

Span::Span( const Span &obj ) {
	*this = obj;
}

Span::Span( unsigned int _maxSize) {
	this->_maxSize = _maxSize;
}

Span &Span::operator = ( const Span &obj ) {
	this->_maxSize = obj._maxSize;
	this->_vNumbers.clear();
	this->_vNumbers = obj._vNumbers;
	return ( *this );
}

int Span::getMaxSize() {
	return ( this->_maxSize );
}

void Span::addNumber( int number ) {
	if( this->_vNumbers.size() == static_cast<size_t>( this->getMaxSize() ) ) {
		throw MaxSizeException();
	}
	this->_vNumbers.push_back( number );
}

void Span::fastAdd( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	srand( time( NULL ) );
	for( ; begin != end; begin++ ) {
		*begin = rand() % 101;
	}
}

int Span::shortestSpan( void ) {
	unsigned int shortest;
	unsigned int shortestTmp;

	shortest = 0;
	if( this->_vNumbers.empty() ) {
		return ( shortest );
	} else {
		for ( std::vector<int>::iterator it = this->_vNumbers.begin(); it != this->_vNumbers.end() - 1; it++ ) {
			shortestTmp = *std::max_element( it, this->_vNumbers.end() )
						  - *std::min_element( it, this->_vNumbers.end() );
			if(it == this->_vNumbers.begin()) {
				shortest = shortestTmp;
			} else if( shortestTmp < shortest ) {
				shortest = shortestTmp;
			}
		}
	}
	return ( shortest );
}

int Span::longestSpan( void ) {
	if( this->_vNumbers.empty() ) {
		return ( 0 );
	}
	return ( *std::max_element( this->_vNumbers.begin(), this->_vNumbers.end() )
		- *std::min_element( this->_vNumbers.begin(), this->_vNumbers.end() ));
}

const char *Span::MaxSizeException::what() const throw() {
	return ( "[EXCEPTION]\nCollection may be overflow");
}

Span::~Span( void ) {

}