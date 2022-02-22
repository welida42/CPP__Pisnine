
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string hum_name);
	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif
