/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <string>
#include "Human.class.hpp"

std::string Human::identify(void) const
{
	return (this->_brain.identify());
}

const Brain &Human::getBrain(void)
{
	return (this->_brain);
}

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}