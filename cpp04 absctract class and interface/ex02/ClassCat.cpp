#include "ClassCat.hpp"

Cat::Cat() :  Animal()
{
	std::cout << type << " (Cat) default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << type << " (Cat) destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain();
	*this = copy;
}

Cat &Cat::operator=(const Cat &operand)
{
	std::cout << "Cat assignation constructor called" << std::endl;
	type = operand.type;
	delete brain;
	brain = new Brain();
	*this->brain = *operand.brain;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat sound (mur): " << getType() << std::endl;
}

std::string  *Cat::getIdeas() const
{
	return brain->getIdeas();
}

void Cat::setIdeas(std::string idea)
{
	brain->setIdeas(idea);
}