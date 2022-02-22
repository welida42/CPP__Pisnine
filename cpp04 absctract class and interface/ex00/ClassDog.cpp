#include "ClassDog.hpp"


Dog::Dog() :  Animal()
{
	type = "Dog";
	std::cout << type << " (Dog) default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " (Dog) destructor called" << std::endl;
}


void Dog::makeSound(void) const
{
	std::cout << "Dog sound (hau-hau): " << getType() << std::endl;
}
