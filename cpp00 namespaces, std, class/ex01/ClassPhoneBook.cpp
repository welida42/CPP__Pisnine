#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->contacts_count = 0;
	this->contacts_write = 0;
}

void PhoneBook::add(void)
{
		int i = contacts_write % 8;
		this->contacts[i].add_contact();
		contacts_write++;
		contacts_count++;
		if (contacts_count > 8)
			contacts_count = 8;
	std::cout << std::endl << "You input a new contact!" << std::endl;
}

void PhoneBook::search(void)
{
	std::string number;
	int 		num;

	if (contacts_count == 0)
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < contacts_count; i++)
		contacts[i].print_one(i);
	std::cout << std::endl << "Enter the index (0 <= index <= 7): ";
	std::getline(std::cin, number);
	if (number.length() == 1 && number[0] >= '0' && number[0] <= '7')
	{
		num = number[0] - '0';
		if (num >= contacts_count)
		{
			std::cout << "Phonebook have not got this index!" << std::endl;
			return;
		}
		for (int i = 0; i < contacts_count; i++)
		{
			if (i == num)
				contacts[i].print_contact();
		}
	}
	else
		std::cout << "Index should be: 0 <= index <= 7" << std::endl;
}