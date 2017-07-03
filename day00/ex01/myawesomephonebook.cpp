/* =============================================================================
 * Project: My Awesome Phonebook
 *
 * Program: A phonebook where you can add, search, or exit
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "contacts.class.hpp"

std::string menu()
{
	std::string choice;

	std::cout << "This phonebook has so many options, choose wisely.\n";
	std::cout << "\tADD\n";
	std::cout << "\tSEARCH\n";
	std::cout << "\tEXIT\n";
	std::cout << "-> ";
	std::getline(std::cin, choice);

	return (choice);
}

int main()
{
	int exit = 1;
	int index = 0;
	int searchIndex;
	std::string choice = "";
	Contact newContact[8];

	std::cout << "*======================================================*\n";
	std::cout << "**                MY AWESOME PHONEBOOK                **\n";
	std::cout << "*=======================================================\n";
	while (exit && index < 9)
	{
		while (choice != "ADD" && choice != "SEARCH" && choice != "EXIT" )
			choice = menu();
		if (choice == "ADD")
		{
			if (index < 8)
				newContact[index].addContact();
			index++;
		}
		else if (choice == "SEARCH")
		{
			for (int i = 0; i < newContact[0].getNumEntries(); i++)
			{
				newContact[i].getBasicInfo();
				std::cout << std::endl;
			}
			std::cout << "Index to view all information: ";
			std::cin >> searchIndex;
			std::cin.ignore();
			if (searchIndex < newContact[0].getNumEntries())
				newContact[searchIndex].getAllInfo();
			else
				if (!std::cin)
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				std::cout << "Invalid index" << std::endl;
		}
		else if (choice == "EXIT")
			exit = 0;
		choice = "";
	}
	if (index == 9)
		std::cout << "MAX CAPACITY REACHED: This phonebook is only eight pages long...\n";

	return (0);
}
