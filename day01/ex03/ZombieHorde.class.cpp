/*==============================================================================
 * Project: Moar Brainz!
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Zombie.class.hpp"
#include "ZombieHorde.class.hpp"

void ZombieHorde::announce(void)
{
	for (int i = 0; i < numZombies; i++)
		horde[i].announce();
}

ZombieHorde::ZombieHorde(void)
{
	numZombies = 0;
	return;
}

ZombieHorde::ZombieHorde(int n)
{
	horde = new Zombie[n];
	numZombies = n;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] horde;
	return;
}