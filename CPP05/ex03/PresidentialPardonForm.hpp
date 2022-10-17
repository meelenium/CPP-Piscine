//
// Created by Tile Tyuuki on 12.10.2022.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( const PresidentialPardonForm &obj );
	PresidentialPardonForm( PresidentialPardonForm &obj );
	~PresidentialPardonForm();

	PresidentialPardonForm &operator = ( const PresidentialPardonForm &obj );
	void execute( const Bureaucrat &executor ) const;
};

#endif
