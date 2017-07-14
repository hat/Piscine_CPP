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

int main()
{
	try
	{
		Bureaucrat bob(150);
		PresidentialPardonForm ppf("ppf");
		RobotomyRequestForm rrf("rrf");
		ShrubberyCreationForm scf("scf");

		bob.decrementGrade(149);

		bob.signForm(ppf);
		ppf.execute(bob);

		bob.signForm(rrf);
		rrf.execute(bob);

		bob.signForm(scf);
		scf.execute(bob);
	}
	catch(Form::CanNotSignException e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	catch(std::exception e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	return (0);
}