/*==============================================================================
 * Project: I ain't heard of no fancy switches
 *
 * Program: Replace two strings in a file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

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
	void (Human::*arrPtrF[3])(std::string const & target) = {&Human::meleeAttack,
		&Human::rangedAttack, &Human::intimidatingShout};

	if (action_name == "melee")
		(this->*arrPtrF[0])(target);
	else if (action_name == "ranged")
		(this->*arrPtrF[1])(target);
	else if (action_name == "shout")
		(this->*arrPtrF[2])(target);
}