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

void Zombie::setType(std::string type)
{
	this->_type = type;
}

Zombie::Zombie(void)
{
	std::string names[] = {"Rufus","Jerome","Gordon","Neil","Lora",
		"Glen","Eduardo","Virginia","Percy","Hilda"};
	this->_name = names[std::rand() % 10];
	this->_type = "walker";
	return;
}

Zombie::Zombie(std::string name) : _name(name)
{
	this->_type = "walker";
	return;
}

Zombie::~Zombie(void)
{
	return;
}