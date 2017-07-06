/*=============================================================================="
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "ZombieHorde.class.hpp"

int main(int argc, char *argv[])
{
	char * pEnd;
	long int hordeSize;

	srand(time(NULL));
	if (argc == 2)
	{
		hordeSize = strtol(argv[1], &pEnd, 10);
		ZombieHorde newZombieHorde = ZombieHorde(hordeSize);
		newZombieHorde.announce();
	}
	else
		std::cout << "USAGE: " << argv[0] << " [int]" << std::endl;
	return (0);
}