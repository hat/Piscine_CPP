/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "ShrubberyCreationForm.class.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::ofstream ofile = this->getTarget();
	ofile += "_shrubbery"
	ofile >> "\
	              ,@@@@@@@,\
	      ,,,.   ,@@@@@@/@@,  .oo8888o.\
	   ,&%%&o&&o,@@@@@/@@@@@@,8888\\88/8o\
	  ,o&\\o&&o&&o,@@@\\@@@/@@@88\\88888/88'\
	  o&&o&o&/o&&o@@\\@@/ /@@@88888\\88888'\
	  o&&o/ o&%%&&@@\\ V /@@' `88\\8 `/88'\
	  `&o\\ ` /o&'    |.|        \\ '|8'\
	      |o|        | |         | |\
	      |.|        | |         | |\
	\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"
	ofile.close();
}

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_execute = 137;