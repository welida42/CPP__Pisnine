#include "ClassWrongCat.hpp"

WrongCat::WrongCat() :  WrongAnimal()
{
	type = "WrongCat";
	std::cout << type << " (WrongCat) default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " (WrongCat) destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound (mur): " << getType() << std::endl;
}
