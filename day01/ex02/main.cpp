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

	srand(time(NULL));
	newZombieEvent.setZombieType("slimer");
	Zombie *zombieOne = newZombieEvent.newZombie("Triker");
	zombieOne->announce();
	newZombieEvent.setZombieType("enfuego");
	newZombieEvent.randomChump();
	delete zombieOne;
	return (0);
}