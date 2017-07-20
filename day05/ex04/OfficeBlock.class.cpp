/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include <string>
#include "Intern.class.hpp"
#include "Form.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"

/* ============================ */
/* 	  NoExistingForm		*/
/* ============================ */

const char * Form::NoExistingForm::what() const throw()
{
	return ("No existing form with that name.");
}

Form::NoExistingForm & Form::NoExistingForm::operator=(NoExistingForm const & rhs)
{
	(void)rhs;
	return (*this);
}

Form::NoExistingForm::NoExistingForm(void) { return; }

Form::NoExistingForm::NoExistingForm(NoExistingForm const & src)
{
	*this = src;
}

Form::NoExistingForm::~NoExistingForm(void) throw() { return; }

std::string Form::getTarget(void) const
{
	return (this->_target);
}

/* ============================ */
/* 	      End Excpetions   		*/
/* ============================ */

Form * Intern::makeForm(std::string name, std::string target)
{
	Form *newForm;
	std::locale loc;

	if (name == "presidential pardon")
		newForm = new PresidentialPardonForm(target);
	else if (name == "robotomy request")
		newForm = new RobotomyRequestForm(target);
	else if (name == "shrubbery creation")
		newForm = new ShrubberyCreationForm(target);
	else
		throw Intern::NoExistingFormException();

	return (newForm);
}

Intern & Intern::operator=(Intern const & rhs) 
{
	(void)rhs;
	return (*this); 
}
Intern::Intern(void) { return; }
Intern::Intern(Intern const & src) { *this = src; }
Intern::~Intern(void) { return;}