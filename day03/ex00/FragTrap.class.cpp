/*=============================================================================
 * Project: Aaaaaaand ... OPEN!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include <string>

void FragTrap::rangedAttack(std::string const & target)
{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target
			<< " at range, causing " << this->_damage << " points of damage!"
			<< std::endl;
}

void  FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " melee attacks " << target
		<< ", causing " << this->_damage << " points of damage!"
		<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " takes " << amount
		<< " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " has been repaired " << amount
		<< " hit points!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	*this = rhs;
	return *this;
}

FragTrap::FragTrap(void) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
	maxEnergyPoints(100), _level(1), _name("Claptrap"), _meleeAttackDamage(30),
	_rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "FragTrap -- start bootup sequence." << std::endl;
	return;
}

Fragtrap::~FragTrap(void)
{
	return
}