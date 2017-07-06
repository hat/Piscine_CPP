/*=============================================================================="
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "ZombieEvent.class.hpp"
#include "Zombie.class.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	zombieEventType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	newZombie->setType(zombieEventType);
	return newZombie;
}

void ZombieEvent::randomChump(void)
{
	std::string names[] = {"Rufus","Jerome","Gordon","Neil","Lora",
		"Glen","Eduardo","Virginia","Percy","Hilda"};
	Zombie *newZombie = new Zombie(names[std::rand() % 10]);
	newZombie->setType(zombieEventType);
	newZombie->announce();
	delete newZombie;
}

ZombieEvent::ZombieEvent(void)
{
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

std::string zombieEventType = "runner";