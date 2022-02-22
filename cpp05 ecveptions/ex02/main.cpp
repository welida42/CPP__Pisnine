# include "Form.hpp"
# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat first("First", 1);
	Bureaucrat last("Last", 150);
	std::cout << first << std::endl;
	std::cout << last << std::endl;
	std::cout << "--------test1-----------" << std::endl;

	try
	{
		PresidentialPardonForm president("test_1");
		std::cout << president << std::endl;
		president.beSigned(first); // comment it to show "not signed"
		president.execute(first);
		president.beSigned(last);
		president.execute(last);
		std::cout << president << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------test2------------" << std::endl;

	try
	{
		PresidentialPardonForm president("test_2");
		std::cout << president << std::endl;

		first.signForm(president);
		first.executeForm(president);
		last.signForm(president);
		last.executeForm(president);
		std::cout << president << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------test3-------------" << std::endl;

	try
	{
		RobotomyRequestForm robotomy("test_3");
		std::cout << robotomy << std::endl;
		robotomy.beSigned(first);
		robotomy.execute(first);
		robotomy.beSigned(last);
		robotomy.execute(last);
		std::cout << robotomy << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------test4------------" << std::endl;

	try
	{
		RobotomyRequestForm robotomy("test_4");
		std::cout << robotomy << std::endl;

		first.signForm(robotomy);
		first.executeForm(robotomy);
		last.signForm(robotomy);
		last.executeForm(robotomy);
		std::cout << robotomy << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------test5-----------" << std::endl;

	try
	{
		ShrubberyCreationForm Shrubbery("test_5");
		std::cout << Shrubbery << std::endl;
		Shrubbery.beSigned(first);
		Shrubbery.execute(first);
		Shrubbery.beSigned(last);
		Shrubbery.execute(last);
		std::cout << Shrubbery << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------test6-----------" << std::endl;

	try
	{
		ShrubberyCreationForm Shrubbery("test_6");
		std::cout << Shrubbery << std::endl;

		first.signForm(Shrubbery);
		first.executeForm(Shrubbery);
		last.signForm(Shrubbery);
		last.executeForm(Shrubbery);
		std::cout << Shrubbery << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------" << std::endl;

	return 0;
}
