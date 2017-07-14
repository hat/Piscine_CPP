/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"

class Form;

class Intern {
	public:
		Form * makeForm(std::string name, std::string target);

		Intern & operator=(Intern const & rhs); //canonical

		Intern(void); //canonical
		Intern(Intern const & src); //canonical
		~Intern(void); //canonical

		class NoExistingFormException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("No form of that name currently exists.");
			}
		};
	private:

};

#endif