//
// Created by Tile Tyuuki on 28.10.2022.
//

#include "Span.hpp"

Span::Span( void ) {
	this->_maxSize = 0;
	this->_sizeCount = 0;
}

Span::Span( unsigned int _maxSize) : _vNumbers( _maxSize ) {
	this->_maxSize = _maxSize;
	this->_sizeCount = 0;
}

Span::Span( const Span &obj ) {
	*this = obj;
}

Span &Span::operator = ( const Span &obj ) {
	this->_maxSize = obj._maxSize;
	this->_sizeCount = obj._sizeCount;
	this->_vNumbers.clear();
	this->_vNumbers = obj.getCollection();
	return ( *this );
}

void Span::addNumber( int number ) {
	if( this->_sizeCount == this->getMaxSize() ) {
		throw MaxSizeException();
	}
	this->_vNumbers[_sizeCount] = number;
	this->_sizeCount++;
}

void Span::fastAdd( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	srand( time( NULL ) );
	for( ; begin != end; begin++ ) {
		*begin = rand() % std::numeric_limits<int>::max();
	}
}

int Span::shortestSpan( void ) {
	unsigned int shortest;
	unsigned int shortestTmp;

	shortest = 0;
	checkSize();
	for ( std::vector<int>::iterator it = this->_vNumbers.begin(); it != this->getEnd() - 1; it++ ) {
		shortestTmp = *std::max_element( it, this->getEnd() )
					- *std::min_element( it, this->getEnd() );
		if(it == this->_vNumbers.begin()) {
			shortest = shortestTmp;
		} else if( shortestTmp < shortest ) {
			shortest = shortestTmp;
		}
	}
	return ( shortest );
}

int Span::longestSpan( void ) {
	checkSize();
	return ( *std::max_element( this->getBegin(), this->getEnd() )
		- *std::min_element( this->getBegin(), this->getEnd() ));
}

void Span::checkSize( void ) {
	if( this->_sizeCount <= 1 ) {
		throw CollectionSizeException();
	}
}

unsigned int Span::getMaxSize() const {
	return (this->_maxSize);
}

std::vector<int>::iterator Span::getBegin( void ) {
	return ( this->_vNumbers.begin() );
}

std::vector<int>::iterator Span::getEnd( void ) {
	return ( this->_vNumbers.end() );
}

std::vector<int> Span::getCollection( void ) const {
	return ( this->_vNumbers );
}

const char *Span::MaxSizeException::what() const throw() {
	return ( "[EXCEPTION]\nCollection may be overflow");
}

const char *Span::CollectionSizeException::what() const throw() {
	return ( "[EXCEPTION]\nCollection have size <= 1");
}

Span::~Span( void ) {

}