/*=============================================================================
 * Project: Mommy, when I frow up I want to be a bureaucrat
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include <string>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

/* ============================ */
/* 	  GradeTooHighException		*/
/* ============================ */

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat has a maximum grade of 150");
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) { return; }

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { return; }

/* ============================ */
/* 	  GradeTooLowException		*/
/* ============================ */

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat has a minimum grade of 1");
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) { return; }

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { return; }

/* ============================ */
/* 	 END OF EXCEPTION CLASSES	*/
/* ============================ */

#include <iostream>
#include <string>
#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

void Bureaucrat::incrementGrade(int grade)
{
	if (this->_grade + grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade += grade;
}

void Bureaucrat::decrementGrade(int grade)
{
	if (this->_grade - grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade -= grade;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getMaxGradeSign() >= this->_grade)
	{
		form.beSigned(*this);
	    std::cout << _name << " signs " << form.getName() << std::endl;
	}
	else
	  std::cout << this->_name << " cannot sign " << form.getName()
	        << " due to not being the right grade." << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << "ERROR: "
				<< e.what();
	}
}

Bureaucrat::Bureaucrat(std::string name): _name(name)
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(int grade): _grade(grade)
{
	this->_name = "Generic";
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooHighException();
		this->_grade = 150;
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooLowException();
		this->_grade = 1;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooHighException();
		this->_grade = 150;
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooLowException();
		this->_grade = 1;
	}
}

Bureaucrat::Bureaucrat(void)
{
	this->_initValue();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;

	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();

	return (o);
}

void	Bureaucrat::_initValue(void)
{
	this->_name = "Generic";
	this->_grade = 150;
}
