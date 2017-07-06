/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.class.hpp"

class HumanB {
	public:
		void attack(void);
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif