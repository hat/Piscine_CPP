/*=============================================================================
 * Project: Mommy, when I frow up I want to be a Form
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
public:
	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getMaxGradeSign(void) const;
	int getMaxGradeExecute(void) const;

	void setName(std::string name);
	void setIsSigned(bool sign);
	void setMaxGradeSign(int maxGrade);
	void setMaxGradeExecute(int maxGrade);

	void beSigned(Bureaucrat & bc);
	void _initValues(void);

	virtual void execute(Bureaucrat const & executor) const = 0;

	Form & operator=(Form const & rhs);
	Form(void);
	Form(Form const & src);
	~Form(void);
private:
	std::string _name;
	bool _signed;
	int _maxGradeSign;
	int _maxGradeExecute;
};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif