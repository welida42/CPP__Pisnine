# include "Form.hpp"

Form::Form(const std::string Name, int GradeToSign, int GradeToExecute) :
	name(Name), gradeToSign(GradeToSign), gradeToExecute(GradeToExecute),
	isSigned(false)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
}

Form::~Form() {}

Form::Form(const Form &copy) : name(copy.name),
	gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute),
	isSigned(copy.isSigned)
{
	*this = copy;
}

Form&::Form::operator=(const Form &operand)
{
	if (this == &operand)
		return *this;
	this->isSigned = operand.isSigned;
	return *this;
}

std::string Form::getName() const { return name; }

bool Form::getIsSigned() const { return isSigned; }

int Form::getGradeToSign() const { return gradeToSign; }

int Form::getGradeToExecute() const { return gradeToExecute; }

void  Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade is too high!");
}

const char* Form::GradeTooLowException:: what() const throw()
{
	return ("Form: Grade is too low!");
}

const char* Form::UnsignedException:: what() const throw()
{
	return ("Form: Form is not signed yet!");
}

std::ostream& operator<<(std::ostream& os, const Form& operand)
{
	std::string str;
	str = operand.getIsSigned() ? "yes" : "no";
	os << operand.getName() << " - form is signed: " << str
	<< "; form grade to sign: " << operand.getGradeToSign()
	<< "; grade to execute: " << operand.getGradeToExecute();
	return os;
}