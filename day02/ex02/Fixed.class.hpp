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

		bool operator>(Fixed const & rhs);
		bool operator<(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);

		Fixed  & operator++(); //pre
		Fixed & operator--(); //pre
		Fixed operator++(int); //post
		Fixed operator--(int); //post

		static Fixed max(Fixed const & a, Fixed const & b);
		static Fixed min(Fixed const & a, Fixed const & b);

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