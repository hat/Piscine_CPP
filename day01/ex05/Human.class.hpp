/*==============================================================================
 * Project: HI BRAIN THIS IS HUMAN
 *
 * Program: Memory addresses
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include <sstream>
#include "Brain.class.hpp"

class Human {
	public:
		std::string identify(void) const;
		const Brain &getBrain(void);
		Human(void);
		~Human(void);
	private:
		const Brain _brain;
};

#endif