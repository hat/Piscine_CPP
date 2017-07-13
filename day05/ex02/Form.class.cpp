/*=============================================================================
 * Project: Mommy, when I frow up I want to be a Form
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "Form.class.hpp"
#include "Bureaucrat.class.hpp"

std::string Form::getTarget(void) const
{
	return (this->_target);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getIsSigned(void) const
{
	return (this->_signed);
}

int Form::getMaxGradeSign(void) const
{
	return (this->_maxGradeSign);
}

int Form::getMaxGradeExecute(void) const
{
	return (this->_maxGradeExecute);
}

void Form::setTarget(std::string target)
{
	this->_name = target;
}

void Form::setName(std::string name)
{
	this->_name = name;
}

void Form::setIsSigned(bool sign)
{
	this->_signed = sign;
}

void Form::setMaxGradeSign(int maxGrade)
{
	if (this->_maxGradeSign + maxGrade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->_maxGradeSign - maxGrade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_maxGradeSign  = maxGrade;
}

void Form::setMaxGradeExecute(int maxGrade)
{
	if (this->_maxGradeExecute + maxGrade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (this->_maxGradeExecute - maxGrade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_maxGradeExecute = maxGrade;
}

void Form::beSigned(Bureaucrat & bc)
{
	if (bc.getGrade() <= this->_maxGradeSign)
		this->setIsSigned(true);
	else
		throw (Bureaucrat::GradeTooLowException());
}

void Form::_initValues(void)
{
	this->_name = "Form";
	this->_signed = false;
	this->_maxGradeSign = 1;
	this->_maxGradeExecute = 1;
}

Form & Form::operator=(Form const & rhs)
{
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_maxGradeSign = rhs._maxGradeSign;
	this->_maxGradeExecute = rhs._maxGradeExecute;
	return (*this);
}

Form::Form(void)
{
	this->_initValues();
}

Form::Form(Form const & src)
{
	*this = src;
}

Form::~Form(void)
{
	return;
}

std::ostream & operator<<(std::ostream & o, Form const & i)
{
	o << i.getName() << "; signed: " << i.getIsSigned() << "; maxGradeSign: "
		<< i.getMaxGradeSign() << "; maxGradeExecute: " << i.getMaxGradeExecute();

	return (o);
}
