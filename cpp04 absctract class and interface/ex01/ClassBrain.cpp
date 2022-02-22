#include "ClassBrain.hpp"

Brain::Brain()
{
	ideas = new std::string [100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "eat somebody!";
	std::cout << "(Brain) default constructor called" << std::endl;
}

Brain::~Brain()
{
	delete [] ideas;
	std::cout << "(Brain) destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &operand)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = operand.ideas[i];
	return *this;
}

std::string *Brain::getIdeas()
{
	return this->ideas;
}

void Brain::setIdeas(std::string idea)
{
	delete [] ideas;
	ideas = new std::string [100];
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}


