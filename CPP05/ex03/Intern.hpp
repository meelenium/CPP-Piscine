//
// Created by Tile Tyuuki on 17.10.2022.
//

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:
	Intern( void );
	Intern( const Intern &obj );
	~Intern();

	Intern &operator = ( const Intern &obj );

	Form *makeForm( std::string name, std::string target );

private:
	Form *getPresidential( std::string target );
	Form *getRobotomy( std::string target );
	Form *getShrubbery( std::string target );

	class FormNotfoundException : public std::exception {
		const char *what() const throw();
	};

};

#endif