#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

class Contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;

public:
	void		print_contact(void);
	void 		add_contact(void);
	void 		print_one(int i);
	std::string	str_handler(std::string value);
};

# endif
