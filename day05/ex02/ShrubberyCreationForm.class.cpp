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

	std::ofstream ofile;
	ofile.open(this->getTarget() + "_shrubbery");
	ofile << "\
          69696969                         69696969\n \
       6969    696969                   696969    6969\n \
     969    69  6969696               6969  6969     696\n \
    969        696969696             696969696969     696\n \
   969        69696969696           6969696969696      696\n \
   696      9696969696969           969696969696       969\n \
    696     696969696969             969696969        969\n \
     696     696  96969      _=_      9696969  69    696\n \
       9696    969696      q(-_-)p      696969    6969\n \
          96969696         '_) (_`         69696969\n \
             96            /__/  \\            69\n \
             69          _(<_   / )_          96\n \
            6969        (__\\_\\_|_/__)        9696\n";
	ofile.close();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("General", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_execute)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_execute)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form("Anonymous", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_execute)
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_execute = 137;