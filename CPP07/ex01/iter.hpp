//
// Created by Tile Tyuuki on 27.10.2022.
//

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter( T *array, int size, void ( *foo )( T & ) ) {
	for(int i = 0; i < size; i++) {
		foo( array[i] );
	}
}

#endif
