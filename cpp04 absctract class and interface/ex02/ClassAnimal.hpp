#ifndef CLASSANIMALL_HPP
# define CLASSANIMALL_HPP
# include <iostream>
# include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &operand);

	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif
