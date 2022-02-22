# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) :
		Form("ShrubberyCreationForm", 145, 137),
		target(Target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
		Form(copy), target(copy.target)
{}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() == false)
		throw UnsignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	const std::string tree =         "                                                           \n"
									 "                 ----         -====-                       \n"
									 "      --==--   -@@@@=-         ==@@@@-    -=====-          \n"
									 "     --===@@@=-@@======-         -==@@= -@@@@@@@@@=-       \n"
									 "         -===@@@@@@=@=====    --=====@@=@====-=---  -      \n"
									 "     -=@@@@@-=@====@@@=-   -@@@@@@@=@@@@@==-=@@@@@=-       \n"
									 "    @@@@@-  -@@@-==---@@= -@@@@==  -@-@@-=@@-  =@@@@@-     \n"
									 "   === -    -@@@- -@- --= =@@- -  -@  @@@ =@@@-  --=-@=    \n"
									 "            -@@@-   @=     @--   -@- -@@@- =@@@-      @-   \n"
									 "             @@@-    =@    -    -@-  -=@@- ==@@=       -   \n"
									 "             -==-     =@        @=   -@@=   -@@            \n"
									 "                       @=      -@    -@-    ==             \n"
									 "                       -@-     @=                          \n"
									 "                        @@    -@                           \n"
									 "                        =@    @=                           \n"
									 "                        =@-  =@                            \n"
									 "                        -@= -@-                            \n"
									 "                        -@@-@@                             \n"
									 "                      --=====--                            \n"
									 "                                                           \n";
	std::ofstream file;
	std::string filename = target+"_shrubbery";
	file.open(filename);
	file << tree;
}