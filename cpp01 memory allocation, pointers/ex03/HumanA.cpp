# include "HumanA.hpp"

HumanA::HumanA(std::string hum_name, Weapon &hum_weapon) :
name(hum_name), weapon(hum_weapon)
{
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}