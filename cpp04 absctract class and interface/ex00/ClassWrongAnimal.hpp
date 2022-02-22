#ifndef CLASSWRONGANIMAL_HPP
# define CLASSWRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &operand);

	std::string getType() const;
	void makeSound() const;
};
#endif
