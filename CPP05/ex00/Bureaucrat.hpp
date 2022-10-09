//
// Created by Tile Tyuuki on 08.10.2022.
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat {

public:
	Bureaucrat( void );
	Bureaucrat( const std::string _name, short _grade );
	Bureaucrat( const Bureaucrat &obj );
	~Bureaucrat( void );

	Bureaucrat &operator = ( const Bureaucrat &obj );

	void incrementGrade( void );
	void decrementGrade( void );

	std::string getName( void ) const;
	short getGrade( void ) const;

private:
	const std::string _name;
	short _grade;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator << ( std::ostream &os, const Bureaucrat &obj );

#endif
