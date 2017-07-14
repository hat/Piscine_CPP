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
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "Intern.class.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	return (0);
}