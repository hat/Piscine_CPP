/*==============================================================================
 * Project: My Awesome PhoneBook
 *
 * Program: A phonebook where you can add, search, or exit
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <iomanip>
#include <string>
#include "contacts.class.hpp"

Contact::Contact() {
	return;
}

void Contact::addContact()
{
	std::cout << "Enter first name: ";
	std::getline (std::cin, this->firstName);
	std::cout << "Enter last name: ";
	std::getline (std::cin, this->lastName);
	std::cout << "Enter nickname: ";
	std::getline (std::cin, this->nickname);
	std::cout << "Enter login: ";
	std::getline (std::cin, this->login);
	std::cout << "Enter postal address: ";
	std::getline (std::cin, this->postalAddress);
	std::cout << "Enter email address: ";
	std::getline (std::cin, this->emailAddress);
	std::cout << "Enter phone number: ";
	std::getline (std::cin, this->phoneNumber);
	std::cout << "Enter birthday date: ";
	std::getline (std::cin, this->birthdayDate);
	std::cout << "Enter favorite meal: ";
	std::getline (std::cin, this->favoriteMeal);
	std::cout << "Enter underwear color: ";
	std::getline (std::cin, this->underwearColor);
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin, this->darkestSecret);
	this->index = Contact::numEntries;
	Contact::numEntries++;
}

void Contact::printInfo(std::string info)
{
	if (info.length() > 10)
		std::cout << std::setw(10) << info.substr(0, 8) + '.' << '|';
	else
		std::cout << std::setw(10) << info << '|';
}

void Contact::getBasicInfo()
{
	std::cout << std::setw(10) << this->index << '|';
	printInfo(this->firstName);
	printInfo(this->lastName);
	printInfo(this->nickname);
}

void Contact::getAllInfo()
{
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal Address: " << this->postalAddress << std::endl;
	std::cout << "Email Address: " << this->emailAddress << std::endl;
	std::cout << "Phone #: " << this->phoneNumber << std::endl;
	std::cout << "Birth Date: " << this->birthdayDate << std::endl;
	std::cout << "Favorite Meal: " << this->favoriteMeal << std::endl;
	std::cout << "Underwear Color: " << this->underwearColor << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}

int	Contact::getNumEntries()
{
	return Contact::numEntries;
}

void Contact::exit()
{

}

Contact::~Contact(){
	return;
}

int Contact::numEntries = 0;