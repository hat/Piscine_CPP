/*==============================================================================
 * Project: Heap of Quadrupeds
 *
 * Program: Allocates a Pony object on the Stack and the Heap
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Pony.class.hpp"

float Pony::getHeightMeters(void) const
{
	return (this->heightMeters);
}

float Pony::getWeightKgs(void) const
{
	return (this->weightKgs);
}

std::string Pony::getColor(void) const
{
	return (this->color);
}

std::string Pony::getName(void) const
{
	return (this->name);
}

void Pony::setHeightMeters(float height)
{
	this->heightMeters = height;
}

void Pony::setWeightKgs(float weight)
{
	this->weightKgs = weight;
}

void Pony::setColor(std::string color)
{
	this->color = color;
}

Pony::Pony(void)
{
	this->name = "unknown";
	this->heightMeters = 0;
	this->weightKgs = 0;
	this->color = "natural";
	this->isUnicorn = false;
}

Pony::Pony(std::string name)
{
	this->name = name;
	this->heightMeters = 0;
	this->weightKgs = 0;
	this->color = "natural";
	this->isUnicorn = false;
}

Pony::~Pony(void)
{
	std::cout << "Goodbye, " << this->name << ", you will be missed :`("
		<< std::endl;
	return;
}