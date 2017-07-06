/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his "
		<< this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon newWeapon)
{
	this->weapon = newWeapon;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

Weapon HumanA::getWeapon(void)
{
	return (this->weapon);
}

std::string HumanA::getName(void)
{
	return (this->name);
}

HumanA::HumanA(void)
{
	this->name = "Bob";
	return;
}

HumanA::HumanA(std::string name)
{
	this->name = name;
	return;
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
	return;
}

HumanA::~HumanA(void)
{
	return;
}