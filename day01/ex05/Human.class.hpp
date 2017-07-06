/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef HUMAN
# define HUMAN

#include <iostream>
#include "Brain.class.hpp"

class Human{
	public:
		std::string identify(void);
		Brain const getBrain(void) const;
		Human(void);
		~Human(void);
	private:
		Brain const newBrain;
};

#endif