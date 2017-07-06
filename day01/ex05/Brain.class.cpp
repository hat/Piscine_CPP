/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <sstream>
#include "Brain.class.hpp"

std::string Brain::identify(void) const
{
	std::stringstream address;
	address << this;
	return (address.str());
}

Brain::Brain(void)
{
	this->numLobes = 0;
}

Brain::Brain(int numLobes)
{
	this->numLobes = numLobes;
}

Brain::~Brain(void)
{
	return;
}
