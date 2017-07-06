/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Weapon.class.hpp"
#include "HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his "
		<< this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon newWeapon)
{
	this->weapon = newWeapon;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

Weapon HumanB::getWeapon(void)
{
	return (this->weapon);
}

std::string HumanB::getName(void)
{
	return (this->name);
}

HumanB::HumanB(void)
{
	this->name = "Bob";
	return;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	return;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
	return;
}

HumanB::~HumanB(void)
{
	return;
}