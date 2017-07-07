/*==============================================================================
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <string>
#include "Zombie.class.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>" <<  
		" Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType(std::string type) : _type(type)
{
	return;
}

Zombie::Zombie()
{
	this->_name = "GenericZombie";
	this->_type = "crawler";
}

Zombie::Zombie(std::string name) : _name(name)
{
	this->_type = "walker";
}

Zombie::~Zombie(void)
{
	return;
}