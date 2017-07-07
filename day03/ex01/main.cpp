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
	ScavTrap bob("Bob");
	ScavTrap freddy("Freddy");
	ScavTrap grewa = freddy;

	bob.rangedAttack("Freddy");
	bob.meleeAttack("Freddy");

	bob.takeDamage(40);
	bob.beRepaired(35);
	bob.beEnergized(10);

	//challenge here

	return (0);
}