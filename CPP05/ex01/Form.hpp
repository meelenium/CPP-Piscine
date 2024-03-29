//
// Created by Tile Tyuuki on 10.10.2022.
//

#ifndef CPP05_FORM_HPP
# define CPP05_FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form( void );
	Form( const Form &obj );
	Form( const std::string _name, const short _gradeForSign, const short _gradeForExecute );
	~Form();

	Form &operator = ( const Form &obj );

	void beSigned( Bureaucrat &person );

	std::string getName( void ) const;
	bool getStatus( void ) const;
	void setStatus( bool _status );
	short getGradeForSign( void ) const;
	short getGradeForExecute( void ) const;

private:
	const std::string _name;
	bool _status;
	const short _gradeForSign;
	const short _gradeForExecute;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

};

std::ostream &operator << ( std::ostream &os, const Form &obj );


#endif //CPP05_FORM_HPP
