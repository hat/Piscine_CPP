/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "PresidentialPardonForm.class.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << this->_target << "has been pardoned by Zafod Beeblebrox.";
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(void): Form("General", "Shrubbery", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, "Shrubbery", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form("Anonymous", "Shrubbery", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_execute = 5;