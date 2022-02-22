#include "ClassAnimal.hpp"

Animal::Animal() :  type("Animal")
{
	std::cout << type << " (Animal) default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " (Animal) destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &operand)
{
	std::cout << "Animal assignation operator called" << std::endl;
	type = operand.type;
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound: " << getType() << std::endl;
}
