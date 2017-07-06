/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef BRAIN
# define BRAIN

#include <iostream>

class Brain{
	public:
		std::string identify(void) const;
		Brain(void);
		Brain(int numLobes);
		~Brain(void);
	private:
		int numLobes;
};

#endif