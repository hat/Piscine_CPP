/*==============================================================================
 * Project: Heap of Quadrupeds
 *
 * Program: Allocates a Pony object on the Stack and the Heap
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include "Pony.class.hpp"

void ponyOnTheHeap(std::string name)
{
	Pony *newPony =  new Pony(name);

	newPony->setHeightMeters(3.45);
	newPony->setWeightKgs(12.1);
	newPony->setColor("black");
	std::cout << "Pony Information: " << "name:" << newPony->getName()
		<< ";height:" << newPony->getHeightMeters() << ";weight:" <<
		newPony->getWeightKgs() << ";color:" << newPony->getColor()
		<< std::endl;

	std::cout << "Goodbye, " << newPony->getName() <<
		" you will be missed :`(" << std::endl;
	delete newPony;
	//~Pony();
}

void ponyOnTheStack(std::string name)
{
	Pony newPony = Pony(name);

	newPony.setHeightMeters(3.45);
	newPony.setWeightKgs(12.1);
	newPony.setColor("black");
	std::cout << "Pony Information: " << "name:" << newPony.getName()
		<< ";height:" << newPony.getHeightMeters() << ";weight:" <<
		newPony.getWeightKgs() << ";color:" << newPony.getColor()
		<< std::endl;
}

int main(void)
{
	ponyOnTheHeap("Dasher");
	ponyOnTheStack("NightRider");
	return (0);
}