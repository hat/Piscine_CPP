/*==============================================================================
 * Project: Plucking some brains
 *
 * Program: Creating and implementing a simple zombie class
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		void announce(void);
		void setType(std::string type);
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
	private:
		std::string type, name;
};

#endif