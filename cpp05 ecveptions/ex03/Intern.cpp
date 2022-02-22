
# include"Intern.hpp"

typedef Form *(*funcs_names)(std::string);

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
	*this =  copy;
}

Intern &Intern::operator=(const Intern &operand)
{
	(void) operand;
	return (*this);
}

Form*	create_President(const std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	create_Robotomy(const std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	create_Shrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string targets[3] = {	"presidential pardon",
								  "robotomy request",
								  "shrubbery creation"};
	funcs_names funcs[3] = {&create_President, &create_Robotomy,
							 &create_Shrubbery};

	int res = -1;
	for (int i = 0; i < 3; i++)
	{
		res = (!targets[i].compare(name)) ? i : -1;
		(res >= 0 && res <= 2) ? (i = 3) : (i += 0);
	}
	if (res == -1)
	{
		std::cout << "requested form is not known" << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << name << std::endl;
	return funcs[res](target);
}
