/*==============================================================================
 * Project: I ain't heard of no fancy switches
 *
 * Program: Replace two strings in a file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include "Human.class.hpp"

int main(void)
{
	Human newHuman;

	newHuman.action("ranged", "Darth Vader");
	newHuman.action("shout", "Big Bad Wolf");
	newHuman.action("melee", "It");
	return (0);
}