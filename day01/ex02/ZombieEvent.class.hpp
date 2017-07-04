/*==============================================================================
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef ZOMBIE_EVENT
# define ZOMBIE_EVENT

# include <iostream>
# include "Zombie.class.hpp"

class ZombieEvent:public Zombie {
	public:
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump(void);
		ZombieEvent(void);
		~ZombieEvent(void);
};

#endif