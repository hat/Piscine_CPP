/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.class.hpp"

class HumanA {
	public:
		void attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif