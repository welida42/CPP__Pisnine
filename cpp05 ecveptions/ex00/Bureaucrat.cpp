# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}  //in private

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name), grade(Grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException:: what() const throw()
{
	return ("Exception: Grade is too low!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& operand)
{
	os << operand.getName() << ", bureaucrat grade " << operand.getGrade();
	return os;
}