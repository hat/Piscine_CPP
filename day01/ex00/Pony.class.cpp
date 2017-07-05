/*==============================================================================
 * Project: Heap of Quadrupeds
 *
 * Program: Allocates a Pony object on the Stack and the Heap
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Pony.class.hpp"

float Pony::getHeightMeters(void)
{
	return (this->heightMeters);
}

float Pony::getWeightKgs(void)
{
	return (this->weightKgs);
}

std::string Pony::getColor(void)
{
	return (this->color);
}

std::string Pony::getName(void)
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
	std::cout << "Goodbye, " << this->name << ". You will also be missed :`("
		<< std::endl;
	return;
}