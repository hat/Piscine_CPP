/*==============================================================================
 * Project: Moar Brainz!
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

ZombieHorde::announce()
{
	for (int i = 0; i < numZombies; i++)
		zombieHorde[i].zombie.announce();
}

ZombieHorde::ZombieHorde(void)
{
	return;
}

ZombieHorde::ZombieHorde(int n)
{
	zombieHorde = new Zombie[n];
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] zombieHorde;
	return;
}

Zombie* zombieHorde[];
int numZombies = 0;