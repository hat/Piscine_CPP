/*=============================================================================
 * Project: My First Conical Class
 *
 * Program: Fixed point number conical class implementation
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed(void); //canonical
		Fixed(Fixed const & src); //canonical
		~Fixed(void); //canonical

		Fixed & operator=(Fixed const & rhs); //canonical

		int getRawBits(void) const;
		void setRawBits(int const raw);	

	private:
		int _value;
		static const int _fractionBits = 8;
};

#endif