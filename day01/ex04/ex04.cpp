/*==============================================================================
 * Project: HI THIS IS BRAIN
 *
 * Program: String with pointer and reference
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainptr = &brain;
	std::string &brainref = brain;

	std::cout << *brainptr << std::endl;
	std::cout << brainref << std::endl;
}