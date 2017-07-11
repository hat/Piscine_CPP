/*=============================================================================
 * Project: Mommy, when I frow up I want to be a Form
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "Form.class.hpp"

class Form {
private:
	std::string getName(void);
	bool getIsSigned(void);
	int getMaxGradeSign(void);
	int getMaxGradeExecute(void);

	std::string setName(std::string name);
	bool setIsSigned(bool sign);
	int setMaxGradeSign(int maxGrade);
	int setMaxGradeExecute(int maxGrade);

	void beSigned(Bureaucrat bc);
	void _initValues(void);

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