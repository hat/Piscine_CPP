/*==============================================================================
 * Project: I ain't heard of no fancy switches
 *
 * Program: Replace two strings in a file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <string>
#include <iostream>
#include "Human.class.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Executed melee attack towards" << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "Executed ranged attack towards " << target << std::endl;	
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidation shout towards " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*HumanFn[3])(std::string const & target) = {&Human::meleeAttack,
		&Human::rangedAttack, &Human::intimidatingShout};

	if (action_name == "melee")
		(this->*HumanFn[0])(target);
	else if (action_name == "ranged")
		(this->*HumanFn[1])(target);
	else if (action_name == "shout")
		(this->*HumanFn[2])(target);
}