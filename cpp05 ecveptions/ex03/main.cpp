
# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"PresidentialPardonForm.hpp"
# include"Bureaucrat.hpp"
# include"Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Form *ppf = someRandomIntern.makeForm("presidential pardon", "test1");
	Form *scf = someRandomIntern.makeForm("shrubbery creation", "test2");
	Form *err = someRandomIntern.makeForm("xxxxxxx", "yyyyyyy");
	if (err)
		std::cout << *err << std::endl;
	std::cout << *rrf << std::endl;
	std::cout << *ppf << std::endl;
	std::cout << *scf << std::endl;

	Bureaucrat first("first", 1);
	Bureaucrat last("last", 150);

	std::cout << "----------------------" << std::endl;
	try
	{
		ppf->beSigned(first);
		ppf->execute(first);
		ppf->beSigned(last);
		ppf->execute(last);
		std::cout << *ppf << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----------------------" << std::endl;

	try
	{
		first.signForm(*ppf);
		first.executeForm(*ppf);
		last.signForm(*ppf);
		last.executeForm(*ppf);
		std::cout << *ppf << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

