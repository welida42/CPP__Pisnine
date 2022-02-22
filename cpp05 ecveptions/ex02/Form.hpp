#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
private:
	const std::string 	name;
	const int			gradeToSign;
	const int			gradeToExecute;
	bool				isSigned;
	std::string 		target;
	Form();

public:
	Form(const std::string Name, int GradeToSign, int GradeToExecute);
	virtual ~Form();
	Form(const Form &copy);
	Form &operator=(const Form &operand);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const  = 0;

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class UnsignedException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& operand);

#endif
