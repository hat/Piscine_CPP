/*==============================================================================
 * Project: Moar Brainz!
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.class.hpp"

class ZombieHorde {
	public:
		Zombie *horde;
		void announce(void);
		ZombieHorde(int n);
		~ZombieHorde(void);
	private:
		int numZombies;
		ZombieHorde(void);
};

#endif