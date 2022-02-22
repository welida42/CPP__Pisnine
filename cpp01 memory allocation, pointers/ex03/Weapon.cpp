
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

std::string const &Weapon::getType(void)
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type.assign(type);
}