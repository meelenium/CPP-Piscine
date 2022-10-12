//
// Created by Tile Tyuuki on 12.10.2022.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm &obj );
	ShrubberyCreationForm( ShrubberyCreationForm &obj );
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator = ( const ShrubberyCreationForm &obj );
	void execute(const Bureaucrat &executor) const;

};

#endif
