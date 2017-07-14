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
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form {
public:
	std::string getTarget(void) const;
	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getMaxGradeSign(void) const;
	int getMaxGradeExecute(void) const;

	void setTarget(std::string target);
	void setName(std::string name);
	void setIsSigned(bool sign);
	void setMaxGradeSign(int maxGrade);
	void setMaxGradeExecute(int maxGrade);

	void beSigned(Bureaucrat & bc);
	void _initValues(void);

	virtual void execute(Bureaucrat const & executor) const = 0;

	Form & operator=(Form const & rhs);

	Form(std::string target);
	Form(std::string target, std::string name);
	Form(std::string target, std::string name, int gradeSign, int gradeExecute);
	Form(void);
	Form(Form const & src);
	~Form(void);

	class CanNotSignException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Unable to sign the form fue to grade and execute level.");
		}
	};
private:
	std::string _target;
	std::string _name;
	bool _signed;
	int _maxGradeSign;
	int _maxGradeExecute;
};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif