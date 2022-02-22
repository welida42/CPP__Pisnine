# include "Form.hpp"
# include "Bureaucrat.hpp"

int main()
{

	try
	{
		Form level_200("level_200", 200, 100);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		Bureaucrat bure_20("bure_20", 20);
		Bureaucrat bure_5("bure_5", 5);
		Form level_10("level_10", 10, 10);
		std::cout << level_10 << std::endl;
		level_10.beSigned(bure_5);
		std::cout << level_10 << std::endl;
		level_10.beSigned(bure_20);
		std::cout << level_10 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	Bureaucrat welida("welida", 3);
	std::cout << welida << std::endl;
	Form level_2("level_2", 2, 10);
	std::cout << level_2 << std::endl;
	std::cout << "---------------------------" << std::endl;
	try
	{
		welida.signForm(level_2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << level_2 << std::endl;
	std::cout << "---------------------------" << std::endl;

	try
	{
		welida.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << welida << std::endl;

	try
	{
		welida.signForm(level_2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << level_2 << std::endl;
	std::cout << "---------------------------" << std::endl;

	try
	{
		welida.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << welida << std::endl;

	try
	{
		welida.signForm(level_2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << level_2 << std::endl;
	std::cout << "---------------------------" << std::endl;

	try
	{
		welida.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << welida << std::endl;
	std::cout << "---------------------------" << std::endl;


	Bureaucrat first("first", 1);
	try
	{
		first.signForm(level_2);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << level_2 << std::endl;

	return 0;
}
