/*=============================================================================
 * Project: Aaaaaaand ... OPEN!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap() {
	public:
		void rangedAttack(std::string const & target);
		void  meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		int _meleeAttackDamage;
		int _rangedAttackDamage;
		int _armorDamageReduction;
		std::string _name;
};

#endif