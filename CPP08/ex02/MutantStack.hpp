//
// Created by Tile Tyuuki on 29.10.2022.
//

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	MutantStack( void );
	MutantStack( const MutantStack<T> &obj );
	~MutantStack( void );

	MutantStack<T> &operator = ( const MutantStack<T> &obj );

	iterator begin( void );
	iterator end( void );
	const_iterator cbegin( void ) const;
	const_iterator cend( void ) const;

};

template<typename T>
MutantStack<T>::MutantStack( void ) {

}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &obj ) {
	*this = obj;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator = ( const MutantStack<T> &obj ) {
	( void )obj;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return ( this->c.begin() );
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return ( this->c.end() );
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
	return ( this->c.cbegin() );
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
	return ( this->c.cend() );
}

template<typename T>
MutantStack<T>::~MutantStack( void ) {

}

#endif
