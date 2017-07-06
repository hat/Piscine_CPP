/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Brain.class.hpp"

std::string Brain::identify(void) const
{
	std::stringstream address;
	address << this;
	return (address.str());
}

Brain::Brain(void)
{
	return;
}

Brain::~Brain(void)
{
	return;
}
