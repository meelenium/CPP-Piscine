//
// Created by Tile Tyuuki on 28.10.2022.
//

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {

public:
	Span( void );
	Span( const Span &obj );
	Span( unsigned int _maxSize);
	~Span( void );

	Span &operator = ( const Span &obj );

	unsigned int getMaxSize( void ) const;
	int getSize( void ) const;
	std::vector<int> getCollection( void ) const;
	std::vector<int>::iterator getBegin( void );
	std::vector<int>::iterator getEnd( void );

	void addNumber( int number );
	void fastAdd( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	int shortestSpan( void );
	int longestSpan( void );

private:
	std::vector<int> _vNumbers;
	unsigned int _sizeCount;
	unsigned int _maxSize;

	void checkSize( void );

	class MaxSizeException : public std::exception {
		const char *what() const throw();
	};

	class CollectionSizeException : public std::exception {
		const char *what() const throw();
	};

};


#endif
