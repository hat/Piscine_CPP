/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	void execute(Bureaucrat const & executor) const;
private:
	static const int _sign;
	static const int _execute;
};

#endif