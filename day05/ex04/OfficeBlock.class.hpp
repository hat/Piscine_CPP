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
#include "Intern.class.hpp"

class Form;

class OfficeBlock {
	public:
		void setIntern(Intern & intern);
		void setSigningBureaucrat(Bureaucrat & bc);
		void setExecutingBureaucrat(Bureaucrat bc);

		OfficeBlock & operator=(OfficeBlock const & rhs); //canonical

		OfficeBlock(Intern & intern, Bureaucrat & signingBureaucrat,  Bureaucrat executingBureaucrat);
		OfficeBlock(void); //canonical
		OfficeBlock(OfficeBlock const & src); //canonical
		~OfficeBlock(void); //canonical

		class NoExistingFormException : public std::exception
		{
			public:
				virtual const char * what() const throw();
				NoExistingFormException & operator=(NoExistingFormException const & rhs);
				NoExistingFormException(void);
				NoExistingFormException(NoExistingFormException const & src);
				virtual ~NoExistingFormException(void) throw();
		};
	private:

};

#endif