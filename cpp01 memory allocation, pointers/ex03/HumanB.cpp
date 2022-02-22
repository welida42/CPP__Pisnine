# include "HumanB.hpp"

HumanB::HumanB(std::string hum_name) : name(hum_name)
{
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}