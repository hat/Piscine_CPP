/*=============================================================================
 * Project: No, you need form 28B, not 28C...
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <iostream>
#include <string>
#include "Form.class.hpp"

class Form;

class OfficeBlock {
	public:
		Form * makeForm(std::string name, std::string target);

		OfficeBlock & operator=(OfficeBlock const & rhs); //canonical

		OfficeBlock(void); //canonical
		OfficeBlock(OfficeBlock const & src); //canonical
		~OfficeBlock(void); //canonical

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