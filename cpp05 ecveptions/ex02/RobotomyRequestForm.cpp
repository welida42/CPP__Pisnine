# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string Target) :
		Form("RobotomyRequestForm", 72, 45),
		target(Target)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
		Form(copy), target(copy.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &operand)
{
	this->target = operand.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() == false)
		throw UnsignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	srand(time(0));
	if(rand() % 2)
		std::cout << "drilling noises and ... " << target
		<< " has been robotomized successfully" << std::endl;
	else
		std::cout << target << " robotomized failed" << std::endl;
}
