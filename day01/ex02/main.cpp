/*=============================================================================="
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "ZombieEvent.class.hpp"

int main(void)
{
	ZombieEvent newZombieEvent;

	Zombie *zombieOne = newZombieEvent.newZombie("Triker");
	zombieOne->setType("runner");
	zombieOne->announce();
	newZombieEvent.randomChump();
}