/*==============================================================================
 * Project: Unnecessary Violence
 *
 * Program: Pointer or refernce to edit an object variable
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
	public:
		const std::string &getType(void);
		void setType(std::string newType);
		Weapon(void);
		Weapon(std::string);
		~Weapon(void);
	private:
		std::string _type;
};

#endif