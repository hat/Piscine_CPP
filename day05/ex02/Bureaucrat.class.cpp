/*=============================================================================
 * Project: Mommy, when I frow up I want to be a bureaucrat
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "Bureaucrat.class.hpp"

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
	    std::cout << this->_name << " signs " << form.getName();
	else
	  std::cout << this->_name << " cannot sign " << form.getName()
	        << " due to not being the right grade.";
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
