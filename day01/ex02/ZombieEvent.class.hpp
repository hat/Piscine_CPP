/*==============================================================================
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.class.hpp"

class ZombieEvent {
	public:
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void randomChump(void);
		ZombieEvent(void);
		~ZombieEvent(void);
	private:
		std::string _zombieEventType;
};

#endif