/*=============================================================================
 * Project: Mommy, when I frow up I want to be a bureaucrat
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include "Bureaucrat.class.hpp"

int main()
{
	try
	{
		Bureaucrat crat("Bob", 150);	
		std::cout << crat << std::endl;

		crat.decrementGrade(5);
		std::cout << crat << std::endl;

		crat.incrementGrade(3);
		std::cout << crat << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << "Too High!" << std::endl;
	}

	try
	{
		Bureaucrat crat("Bob", 155);	
		std::cout << crat << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << "That's way too High!" << std::endl;
	}

	try
	{
		Bureaucrat crat("Bob", 0);	
		std::cout << crat << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << "That's too low!" << std::endl;
	}

	try
	{
		Bureaucrat crat("Bob", 145);	
		std::cout << crat << std::endl;

		crat.incrementGrade(6);
		std::cout << crat << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << "That's high as can be!" << std::endl;
	}

	try
	{
		Bureaucrat crat("Bob", 9);	
		std::cout << crat << std::endl;

		crat.decrementGrade(10);
		std::cout << crat << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << "That's lower than dirt!" << std::endl;
	}

	return (0);
}