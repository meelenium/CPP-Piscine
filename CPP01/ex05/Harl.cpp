//
// Created by Tile Tyuuki on 21.09.2022.
//

#include "Harl.hpp"

Harl::Harl( void ) { }

void Harl::_debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::_info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	int i;
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*fooPointer[4])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };

	i = 0;
	while(levels[i] != level) {
		if(levels[i] == "ERROR") {
			std::cout << "[ERROR]\nNon valid level" << std::endl;
			return ;
		}
		i++;
	}
	(this->*fooPointer[i])();
}

Harl::~Harl() { }