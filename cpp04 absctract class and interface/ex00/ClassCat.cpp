#include "ClassCat.hpp"


Cat::Cat() :  Animal()
{
	type = "Cat";
	std::cout << type << " (Cat) default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " (Cat) destructor called" << std::endl;
}


void Cat::makeSound(void) const
{
	std::cout << "Cat sound (mur): " << getType() << std::endl;
}
