/*==============================================================================
 * Project: Moar Brainz!
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Zombie.class.hpp"

class ZombieHorde:public Zombie {
	public:
		Zombie *horde[];
		int numZombies;
		announce();
		ZombieHorde(int n);
		~ZombieHorde(void);
	private:
		ZombieHorde(void);
};