#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <iostream>
# include <string>

class RobotomyRequestForm : public Form
{
private:
	std::string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string Target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator= (const RobotomyRequestForm &operand);
	void execute(Bureaucrat const &executor) const;
};

#endif
