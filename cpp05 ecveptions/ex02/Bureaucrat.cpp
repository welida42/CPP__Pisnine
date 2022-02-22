# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name), grade(Grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
	*this = copy;
}

Bureaucrat&::Bureaucrat::operator=(const Bureaucrat &operand)
{
	if (this == &operand)
		return *this;
	this->grade = operand.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form& form)
{
	std::string reason;
	reason = form.getIsSigned() ? "form is already signed " :
			"grade is too low";
	if (form.getIsSigned())
	{
		std::cout << getName() << " cannot sign " << form.getName()
			<< " because " << reason << std::endl;;
		return ;
	}

	if (this->getGrade() <= form.getGradeToSign())
	{
		std::cout << getName() << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else
	{
		std::cout << getName() << " cannot sign " << form.getName()
			<< " because " << reason << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	std::string reason;
	reason = (form.getIsSigned() == false) ? "form is not signed yet" :
			 "grade is too low";
	if (form.getIsSigned() == false)
	{
		std::cout << getName() << " cannot execute " << form.getName()
				  << " because " << reason << std::endl;;
		return ;
	}

	if (this->getGrade() <= form.getGradeToExecute())
	{
		form.execute(*this);
		std::cout << getName() << " executes " << form.getName() << std::endl;
	}
	else
	{
		std::cout << getName() << " cannot execute " << form.getName()
				  << " because " << reason << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException:: what() const throw()
{
	return ("Bureaucrat: Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& operand)
{
	os << operand.getName() << ", bureaucrat grade " << operand.getGrade();
	return os;
}