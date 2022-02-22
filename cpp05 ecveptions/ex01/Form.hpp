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
	Form();


public:
	Form(const std::string Name, int GradeToSign, int GradeToExecute);
	~Form();
	Form(const Form &copy);
	Form &operator=(const Form &operand);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bureaucrat);

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
};

std::ostream& operator<<(std::ostream& os, const Form& operand);

#endif
