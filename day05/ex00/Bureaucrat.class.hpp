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

class Bureaucrat {

public:
	void incrementGrade(int grade);
	void decrementGrade(int grade);
	void _initValue(void);

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
		public:
			virtual const char * what() const throw();
			GradeTooHighException & operator=(GradeTooHighException const & rhs);
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & src);
			virtual ~GradeTooHighException(void) throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw();
			GradeTooLowException & operator=(GradeTooLowException const & rhs);
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & src);
			virtual ~GradeTooLowException(void) throw();
	};

private:
	std::string _name;
	int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif