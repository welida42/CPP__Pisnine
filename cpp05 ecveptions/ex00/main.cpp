
# include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat hundred("hundred", 100);
		std::cout << hundred << std::endl;
		hundred.incrementGrade();
		std::cout << hundred << std::endl;
		hundred.decrementGrade();
		std::cout << hundred << std::endl;
		std::cout << "++++++++" << std::endl;
		hundred.decrementGrade();
		std::cout << hundred << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;

	try
	{
		Bureaucrat last("last", 150);
		std::cout << last << std::endl;
		last.decrementGrade();
		std::cout << "++++++++" << std::endl;
		std::cout << last << std::endl;
		last.decrementGrade();
		std::cout << last << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;

	try
	{
		Bureaucrat first("first", 1);
		std::cout << first << std::endl;
		first.incrementGrade();
		std::cout << "++++++++" << std::endl;
		std::cout << first << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;

	try
	{
		Bureaucrat looser("looser", 200);
		std::cout << "++++++++" << std::endl;
		std::cout << looser.getGrade();
		std::cout << looser << std::endl;
		looser.incrementGrade();
		std::cout << looser << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;

	try
	{
		Bureaucrat zero("zero", 0);
		std::cout << "++++++++" << std::endl;
		std::cout << zero.getGrade();
		std::cout << zero << std::endl;
		zero.incrementGrade();
		std::cout << zero << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		Bureaucrat negativ("negativ", 0);
		std::cout << "++++++++" << std::endl;
		std::cout << negativ.getGrade();
		std::cout << negativ << std::endl;
		negativ.incrementGrade();
		std::cout << negativ << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}
