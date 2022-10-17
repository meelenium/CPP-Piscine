//
// Created by Tile Tyuuki on 10.10.2022.
//

#ifndef FORM_HPP
# define FORM_HPP

# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form( void );
	Form( const Form &obj );
	Form( const std::string _name, const short _gradeForSign, const short _gradeForExecute, std::string _target );
	virtual ~Form();

	Form &operator = ( const Form &obj );

	void beSigned( Bureaucrat &person );
	virtual void execute( Bureaucrat const &executor ) const = 0;

	std::string getName( void ) const;
	bool getStatus( void ) const;
	std::string getTarget( void ) const;
	void setTarget( std::string _target );
	void setStatus( bool _status );
	short getGradeForSign( void ) const;
	short getGradeForExecute( void ) const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

private:
	std::string _target;
	const std::string _name;
	bool _status;
	const short _gradeForSign;
	const short _gradeForExecute;

};

std::ostream &operator << ( std::ostream &os, const Form &obj );


#endif
