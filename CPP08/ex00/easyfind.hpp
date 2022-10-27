//
// Created by Tile Tyuuki on 27.10.2022.
//

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template<typename T>
typename T::iterator easyFind( T &container, int num ) {
	typename T::iterator it;

	it = find(container.begin(), container.end(), num);
	if(it == container.end()) {
		throw std::out_of_range("[EXCEPTION]\nData not found");
	} else {
		return ( it );
	}
}

#endif
