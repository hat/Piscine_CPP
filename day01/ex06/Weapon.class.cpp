/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Weapon.class.hpp"

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

Weapon::Weapon(void)
{
	return;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}