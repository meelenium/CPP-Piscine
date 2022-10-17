//
// Created by Tile Tyuuki on 12.10.2022.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( const RobotomyRequestForm &obj );
	RobotomyRequestForm( RobotomyRequestForm &obj );
	~RobotomyRequestForm();

	RobotomyRequestForm &operator = ( const RobotomyRequestForm &obj );
	void execute(const Bureaucrat &executor) const;

};

#endif
