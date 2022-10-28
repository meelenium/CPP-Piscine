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

	int getMaxSize( void );
	int getSize( void );

	void addNumber( int number );
	void fastAdd( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	int shortestSpan( void );
	int longestSpan( void );

private:
	std::vector<int> _vNumbers;
	int _maxSize;

	class MaxSizeException : public std::exception {
		const char *what() const throw();
	};

};


#endif
