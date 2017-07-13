/*=============================================================================
 * Project: Mommy, when I frow up I want to be a bureaucrat
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.class.hpp"

class Bureaucrat {

public:
	void incrementGrade(int grade);
	void decrementGrade(int grade);
	void _initValue(void);
	void signForm(Form & form);
	void executeForm(Form const & form);

	std::string getName(void) const;
	int getGrade(void) const;

	Bureaucrat & operator=(Bureaucrat const & rhs); //canonical

	Bureaucrat(std::string name);
	Bureaucrat(int grade);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(void); //canonical
	Bureaucrat(Bureaucrat const & src); //canonical
	~Bureaucrat(void); //canonical

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Bureaucrat has a maximum grade of 150");
		}
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Bureaucrat has a minimum grade of 1");
		}
	};

private:
	std::string _name;
	int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif