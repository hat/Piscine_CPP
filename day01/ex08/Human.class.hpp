/*==============================================================================
 * Project: I ain't heard of no fancy switches
 *
 * Program: Replace two strings in a file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <string>

class Human {
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);
	public:
		void action(std::string const & action_name, std::string const & target);
};