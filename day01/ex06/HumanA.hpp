/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Weapon.class.hpp"

class HumanA {
	public:
		void attack(void);
		void setWeapon(Weapon newWeapon);
		void setName(std::string name);
		Weapon getWeapon(void);
		std::string getName(void); 
		HumanA(void);
		HumanA(std::string);
		HumanA(std::string, Weapon);
		~HumanA(void);
	private:
		Weapon weapon;
		std::string name;
};