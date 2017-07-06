/*=============================================================================="
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "ZombieHorde.class.hpp"
//#include "Zombie.class.cpp"

int main(void)
{
	ZombieHorde newZombieHorde = ZombieHorde(10);

	newZombieHorde.announce();
	return (0);
}