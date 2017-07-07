/*=============================================================================
 * Project: My First Conical Class
 *
 * Program: Fixed point number conical class implementation
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = val << _fractionBits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
    this->_value = (int) round(val * (1 << _fractionBits));
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called " << std::endl;

	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return (o);
}

float Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_fractionBits);
}

int Fixed::toInt(void) const
{
	return this->_value >> _fractionBits;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw) 
{
	this->_value = raw;

}