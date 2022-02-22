#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>
# include <string>

class PresidentialPardonForm : public Form
{
private:
	std::string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string Target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator= (const PresidentialPardonForm &operand);
	void execute(Bureaucrat const &executor) const;
};

#endif
