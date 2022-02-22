#include "ClapTrap.hpp"
#include "FragTrap.hpp"

ClapTrap::ClapTrap() :  Name(""), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap default constructor without Name called" <<
	std::endl;
}

ClapTrap::ClapTrap(std::string name) :
Name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << Name << " attacks " << target << " causing " <<
	Attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > Energy_points)
		Energy_points = 0;
	else
		Energy_points -= amount;
	std::cout << Name << " take a damage of " << amount
			  << " points and have " << Energy_points << " energy points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 100 - Energy_points)
		Energy_points = 100;
	else
		Energy_points+=amount;
	std::cout << Name << " repaired by " << amount << " points and have "
			  << Energy_points << " energy points!" << std::endl;
}
