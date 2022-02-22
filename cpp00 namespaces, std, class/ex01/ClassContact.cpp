#include "ClassPhoneBook.hpp"

void Contact::add_contact(void)
{
	std::string str;

	std::cout << "first name: ";
	std::getline(std::cin, str);
	this->firstname.assign(str);
	std::cout << "last name: ";
	std::getline(std::cin, str);
	this->lastname.assign(str);
	std::cout << "nickname: ";
	std::getline(std::cin, str);
	this->nickname.assign(str);
	std::cout << "phone number: ";
	std::getline(std::cin, str);
	this->phonenumber.assign(str);
	std::cout << "darkest secret: ";
	std::getline(std::cin, str);
	this->darkestsecret.assign(str);
}

std::string	Contact::str_handler(std::string value)
{
	std::string	str;

	str = value;
	if (value.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void Contact::print_one(int i)
{
	std::cout << std::setw(10) << i << '|';
	std::cout << std::setw(10) << this->str_handler(firstname) << '|';
	std::cout << std::setw(10) << this->str_handler(lastname) << '|';
	std::cout << std::setw(10) << this->str_handler(nickname) << '|';
	std::cout << std::endl;
}

void Contact::print_contact(void)
{
	std::cout << "first name: " << firstname << std::endl;
	std::cout << "last name: " << lastname << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone number: " << phonenumber << std::endl;
	std::cout << "darkest secret: " << darkestsecret << std::endl;
}