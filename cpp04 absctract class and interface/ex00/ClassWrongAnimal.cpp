#include "ClassWrongAnimal.hpp"

WrongAnimal::WrongAnimal() :  type("WrongAnimal")
{
	std::cout << type << " (WrongAnimal) default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " (WrongAnimal) destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &operand)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	type = operand.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound: " << getType() << std::endl;
}

