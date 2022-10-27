//
// Created by Tile Tyuuki on 27.10.2022.
//

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {

public:
	Array( void );
	Array( const Array<T> &obj );
	Array( unsigned int n);
	~Array( void );

	Array<T> &operator = ( const Array<T> &obj );
	T &operator [] ( const int &index );

	int size( void ) const;

private:
	T *_array;
	int _size;

};

template<typename T>
Array<T>::Array( void ) {
	this->_array = new T[1];
	this->_size = 1;
}

template<typename T>
Array<T>::Array( unsigned int _size) {
	this->_array = new T[_size];
	this->_size = _size;
}

template<typename T>
Array<T>::Array( const Array<T> &obj ) : _array(nullptr) {
	*this = obj;
}

template<typename T>
Array<T> &Array<T>::operator = ( const Array<T> &obj ) {
    if(this->_array) {
	    delete[] this->_array;
    }
	this->_array = new T[obj.size()];
	this->_size = obj._size;
	for( int i = 0; i < this->size(); i++ ) {
		this->_array[i] = obj._array[i];
	}
	return ( *this );
}

template<typename T>
T &Array<T>::operator [] ( const int &index ) {
	if( index < 0 || index >= this->size() ) {
		throw std::out_of_range("[EXCEPTION]\nIndex isn't valid");
	}
	return ( this->_array[index] );
}


template<typename T>
int Array<T>::size( void ) const {
	return ( this->_size );
}

template<typename T>
Array<T>::~Array( void ) {
	delete[] this->_array;
}

#endif
