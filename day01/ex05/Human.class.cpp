/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Human.class.hpp"
#include "Brain.class.hpp"

std::string Human::identify(void)
{
	return (this->newBrain.identify());
}

Brain const Human::getBrain(void) const
{
	return (this->newBrain);
}

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}