#include "ClassDog.hpp"

Dog::Dog() :  Animal()
{
	std::cout << type << " (Dog) default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " (Dog) destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &operand)
{
	std::cout << "Dog assignation constructor called" << std::endl;
	type = operand.type;
	delete brain;
	brain = new Brain();
	*this->brain = *operand.brain;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog sound (hau-hau): " << getType() << std::endl;
}

std::string  *Dog::getIdeas() const
{
	return brain->getIdeas();
}

void Dog::setIdeas(std::string idea)
{
	brain->setIdeas(idea);
}