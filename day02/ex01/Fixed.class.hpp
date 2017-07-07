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
#include <cmath>

class Fixed {
	public:
		Fixed(void); //canonical
		Fixed(Fixed const & src); //canonical

		Fixed(const int val);
		Fixed(const float val);

		~Fixed(void); //canonical

		Fixed & operator=(Fixed const & rhs); //canonical
		Fixed & operator<<(Fixed const & rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _value;
		static const int _fractionBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif