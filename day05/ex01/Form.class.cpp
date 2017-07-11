/*=============================================================================
 * Project: Mommy, when I frow up I want to be a Form
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "Form.class.hpp"

std::string Form::getName(void)
{
	return (this->_name);
}

bool Form::getIsSigned(void)
{
	return (this->_signed);
}

int Form::getMaxGradeSign(void)
{
	return (this->_maxGradeSign);
}

int Form::getMaxGradeExecute(void)
{
	return (this->_maxGradeExecute);
}

std::string setName(void)
{
	return (this->_name);
}

bool Form::setIsSigned(bool sign)
{
	this->_signed = sign;
}

int Form::setMaxGradeSign(int maxGrade)
{
	if (this->maxGrade + maxGrade > 150)
		return (Form::GradeTooLowException)
	else if (this->maxGrade - maxGrade < 1)
		return (Form::GradeTooHighException)
	else
		this->_maxGradeSign  = maxGrade;
}

int Form::setMaxGradeExecute(int maxGrade)
{
	if (this->maxGrade + maxGrade > 150)
		return (Form::GradeTooLowException);
	else if (this->maxGrade - maxGrade < 1)
		return (Form::GradeTooHighException);
	else
		this->_maxGradeExecute = maxGrade;
}

void Form::beSigned(Bureaucrat bc)
{
	if (bc->getGrade <= this->_maxGradeSign)
		this->setIsSigned(true);
	else
		return (Form::GradeTooLowException);
}

void Form::_initValues(void)
{
	this->_name = "Form"
	this->_signed = false;
	this->_maxGradeSign = 1;
	this->_maxGradeExecute = 1;
}

Form & Form::operator=(Form const & rhs)
{
	this->_name = rhs._name;
	this->_signed - rhs._signed;
	this->_maxGradeSign = rhs._maxGradeSign;
	this->_maxGradeExecute = rhs._maxGradeExecute;
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
