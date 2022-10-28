//
// Created by Tile Tyuuki on 28.10.2022.
//

#include "Span.hpp"

int main( void ) {

	try {
		std::cout << "Normal test" << std::endl;
		std::cout << "====================" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "Copy constructor and overload operator test test" << std::endl;
		std::cout << "====================" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		Span spTwo = sp;
		std::cout << "Shortest: " << spTwo.shortestSpan() << std::endl;
		std::cout << "Longest: " << spTwo.longestSpan() << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "\"fastAdd()\" test" << std::endl;
		std::cout << "====================" << std::endl;
		Span sp(15);
		sp.fastAdd(sp.getBegin(), sp.getEnd());
		std::vector<int> copyCollection = sp.getCollection();
		for( size_t i = 0; i < copyCollection.size(); i++ ) {
			std::cout << "[" << i <<  "]: " << copyCollection[i] << std::endl;
		}
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "Empty collection test" << std::endl;
		std::cout << "====================" << std::endl;
		Span sp = Span(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "Default constructor test" << std::endl;
		std::cout << "====================" << std::endl;
		Span sp;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	std::cout << std::endl;

	try {
		std::cout << "Exception test" << std::endl;
		std::cout << "====================" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch ( const std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "====================" << std::endl;
	std::cout << std::endl;
}