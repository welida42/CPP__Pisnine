#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "ClassContact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int 	contacts_count;
	int 	contacts_write;

public:
	PhoneBook(void);
	void	add(void);
	void	search(void);
};


# endif