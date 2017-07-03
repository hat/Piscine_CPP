/*==============================================================================
 * Project: My Awesome PhoneBook
 *
 * Program: A phonebook where you can add, search, or exit
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef CONTACTS_H
# define CONTACTS_H

#include <iostream>

class Contact {
	private:
		std::string firstName, lastName, nickname, login, postalAddress,
			emailAddress, phoneNumber, birthdayDate, favoriteMeal,
			underwearColor, darkestSecret;
		int index;
		static int numEntries;
		static void printInfo(std::string);
		//int postalAddress, phoneNumber, birthdayDate;
	public:
		void addContact(void);
		void getBasicInfo(void);
		void getAllInfo(void);
		int  getNumEntries(void);
		void exit(void);

		Contact();
		~Contact();
};

#endif
