/*==============================================================================
 * Project: memoryLeak
 *
 * Program: Fix the memory leak in the program
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}