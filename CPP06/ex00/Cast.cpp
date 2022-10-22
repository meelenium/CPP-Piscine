//
// Created by Tile Tyuuki on 18.10.2022.
//

#include "Cast.hpp"

Cast::Cast( void ) {
	this->_variable = "0";
	this->_flag = 0;
}

Cast::Cast( const Cast &obj ) {
	*this = obj;
}

Cast::Cast( std::string _variable ) {
	this->_variable = _variable;
	this->_flag = this->_getFlag();
}

Cast &Cast::operator = ( const Cast &obj ) {
	this->_variable = obj._variable;
	return ( *this );
}

void Cast::toChar( void ) {
	int var;

	std::cout << "Char: ";
	if (this->_flag == DEFAULT) {
		try {
			var = std::stoi( this->_variable.c_str() );
			if ( var > std::numeric_limits<char>::max() \
 				|| var < 0 ) {
				std::cout << "impossible" << std::endl;
			} else if ( !isprint(var) ) {
				std::cout << "Non displayable" << std::endl;
			} else {
				std::cout << '\'' << static_cast<char>( var ) << '\'' << std::endl;
			}
		} catch ( const std::out_of_range &ex ) {
			std::cout << "impossible" << std::endl;
		} catch ( const std::invalid_argument &ex ) {
			std::cout << "impossible" << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void Cast::toInt( void ) {
	int var;

	std::cout << "Int: ";
	if( this->_flag == DEFAULT ) {
		try {
			var = std::stoi( this->_variable.c_str() );
			std::cout << var << std::endl;
		} catch ( const std::out_of_range &ex ) {
			std::cout << "impossible" << std::endl;
		} catch ( const std::invalid_argument &ex ) {
			std::cout << "impossible" << std::endl;
		}
	} else {
		std::cout << "impossible" << std::endl;
	}
}

void Cast::toFloat( void ) {
	float var;

	std::cout << "Float: ";
	if( this->_flag == DEFAULT ) {
		try {
			var = std::stof( this->_variable.c_str() );
			std::cout << var;
			if ( var == static_cast<int>( var ) ) {
				std::cout << ".0f" << std::endl;
				return ;
			}
			std::cout << 'f' << std::endl;
		} catch ( const std::out_of_range &ex ) {
			std::cout << "nanf" << std::endl;
		} catch ( const std::invalid_argument &ex ) {
			std::cout << "nanf" << std::endl;
		}
	} else {
		std::cout << "nanf" << std::endl;
	}
}

void Cast::toDouble( void ) {
	double var;

	std::cout << "Double: ";
	if( this->_flag == DEFAULT ) {
		try {
			var = std::stod( this->_variable.c_str() );
			std::cout << var;
			if ( var == static_cast<int>( var ) ) {
				std::cout << ".0" << std::endl;
				return ;
			}
			std::cout << std::endl;
		} catch ( const std::out_of_range &ex ) {
			std::cout << "nan" << std::endl;
		} catch ( const std::invalid_argument &ex ) {
			std::cout << "nan" << std::endl;
		}
	} else {
		std::cout << "nan" << std::endl;
	}
}

int Cast::_getFlag( void ) {
	if( !this->_variable.compare( "+inff" )\
		|| !this->_variable.compare( "-inff" )) {
		return ( INFF );
	}
	if( !this->_variable.compare( "nanf" ) ) {
		return ( NANF );
	}
	if( !this->_variable.compare( "+inf" )\
		|| !this->_variable.compare( "-inf" )) {
		return ( INF );
	}
	if( !this->_variable.compare( "nan" ) ) {
		return ( NAN );
	}
	return ( DEFAULT );
}

void Cast::setVariable( std::string _variable ) {
	this->_variable = _variable;
	this->_flag = this->_getFlag();
}

std::string Cast::getVariable( void ) const {
	return ( this->_variable );
}

Cast::~Cast( void ) {

}