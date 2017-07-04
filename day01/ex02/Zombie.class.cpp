/*==============================================================================
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Zombie.class.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>" <<  
		" Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

Zombie::Zombie()
{
	this->name = "GenericZombie";
	this->type = "crawler";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->type = "walker";
}

Zombie::~Zombie(void)
{
	return;
}