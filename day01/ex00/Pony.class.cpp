/*==============================================================================
 * Project: Heap of Quadrupeds
 *
 * Program: Allocates a Pony object on the Stack and the Heap
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <string>
#include "Pony.class.hpp"

float Pony::getHeightMeters(void) const
{
	return (this->_heightMeters);
}

float Pony::getWeightKgs(void) const
{
	return (this->_weightKgs);
}

std::string Pony::getColor(void) const
{
	return (this->_color);
}

std::string Pony::getName(void) const
{
	return (this->_name);
}

void Pony::setHeightMeters(float height)
{
	this->_heightMeters = height;
}

void Pony::setWeightKgs(float weight)
{
	this->_weightKgs = weight;
}

void Pony::setColor(std::string color)
{
	this->_color = color;
}

Pony::Pony(void)
{
	this->_name = "unknown";
	this->_heightMeters = 0;
	this->_weightKgs = 0;
	this->_color = "natural";
	this->_isUnicorn = false;
}

Pony::Pony(std::string name) : _name(name)
{
	this->_heightMeters = 0;
	this->_weightKgs = 0;
	this->_color = "natural";
	this->_isUnicorn = false;
}

Pony::~Pony(void)
{
	std::cout << "Goodbye, " << this->_name << ", you will be missed :`("
		<< std::endl;
	return;
}