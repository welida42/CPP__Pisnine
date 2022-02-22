#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	attack_damage = Attack_damage;
	std::cout << "FragTrap default constructor without Name called" <<
			  std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	attack_damage = Attack_damage;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << Name << " from FragTrap attacks " << target << " causing " <<
			  Attack_damage << " points of damage!" << std::endl;
}
//void FragTrap::takeDamage(unsigned int amount)
//{
//	if (amount > Energy_points)
//		amount = Energy_points;
//	Energy_points -= amount;
//	std::cout << Name << " from FragTrap take a damage of " << amount
//			  << " points and have " << Energy_points << " energy points!" << std::endl;
//}

//void FragTrap::beRepaired(unsigned int amount)
//{
//	if (amount > 100 - Energy_points)
//		amount = 100 - Energy_points;
//	Energy_points+=amount;
//	std::cout << Name << " from FragTrap repaired by " << amount << " points and have "
//			  << Energy_points << " energy points!" << std::endl;
//}

void FragTrap::highFivesGuys(void)
{
	std::cout  << Name << ": give me five!" << std::endl;
}
