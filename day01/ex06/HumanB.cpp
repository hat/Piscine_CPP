/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his "
		<< this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_name = name;
	return;
}

HumanB::HumanB(void)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}