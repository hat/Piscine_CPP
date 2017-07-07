/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <string>
#include "Weapon.class.hpp"

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string newType)
{
	this->_type = newType;
}

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}