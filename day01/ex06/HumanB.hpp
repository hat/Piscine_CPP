/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Weapon.class.hpp"

class HumanB {
	public:
		void attack(void);
		void setWeapon(Weapon newWeapon);
		void setName(std::string name);
		Weapon getWeapon(void);
		std::string getName(void); 
		HumanB(void);
		HumanB(std::string);
		HumanB(std::string, Weapon);
		~HumanB(void);
	private:
		Weapon weapon;
		std::string name;
};