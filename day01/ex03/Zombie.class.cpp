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

Zombie::Zombie(void)
{
	std::string names[] = {"Rufus","Jerome","Gordon","Neil","Lora","Glen","Eduardo","Virginia","Percy","Hilda"};
	this->name = names[std::rand() % 10];
	this->type = "walker";
	return;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	this->type = "walker";
	return;
}

Zombie::~Zombie(void)
{
	return;
}