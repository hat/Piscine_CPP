/*=============================================================================
 * Project: Serena, my love!
 *
 * Program: Creates a FR4G-TP assault robot class for game
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ScavTrap.class.hpp"

int main()
{
	ScavTrap humi("humi");
	ScavTrap Gina("Gina");
	ScavTrap Pire = Gina;

	humi.rangedAttack("Gina");
	humi.meleeAttack("Gina");

	humi.takeDamage(40);
	humi.beRepaired(35);
	humi.beEnergized(10);

	humi.challengeNewcomer("Gina");

	return (0);
}