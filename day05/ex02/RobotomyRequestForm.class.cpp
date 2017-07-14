/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "RobotomyRequestForm.class.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	int success = rand() % 2;

	std::cout << "\a\a\a\a\aRizzzzz \a Rizzzzz... ";
	if (success)
		std::cout << "Success!" << std::endl;
	else
		std::cout << "Failure!" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(void): Form("General", "Shrubbery", RobotomyRequestForm::_sign, RobotomyRequestForm::_execute)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, "Shrubbery", RobotomyRequestForm::_sign, RobotomyRequestForm::_execute)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form("Anonymous", "Shrubbery", RobotomyRequestForm::_sign, RobotomyRequestForm::_execute)
{
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_execute = 45;