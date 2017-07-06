/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Human.class.hpp"

std::string Human::identify(void) const
{
	std::stringstream address;
	address << &(this->_brain);
	return (address.str());
}

const Brain &Human::getBrain(void)
{
	return this->_brain;
}

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}