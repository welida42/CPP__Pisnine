#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>
# include <string>
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string Target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator= (const ShrubberyCreationForm &operand);
	void execute(Bureaucrat const &executor) const;
};

#endif
