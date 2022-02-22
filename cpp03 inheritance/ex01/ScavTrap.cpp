#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap default constructor without Name called" <<
			  std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << Name << " from ScavTrap attacks " << target << " causing " <<
			  Attack_damage << " points of damage!" << std::endl;
}
//void ScavTrap::takeDamage(unsigned int amount)
//{
//	if (amount > Energy_points)
//		amount = Energy_points;
//	Energy_points -= amount;
//	std::cout << Name << " from ScavTrap take a damage of " << amount
//			  << " points and have " << Energy_points << " energy points!" << std::endl;
//}
//
//void ScavTrap::beRepaired(unsigned int amount)
//{
//	if (amount > 50 - Energy_points)
//		amount = 50 - Energy_points;
//	Energy_points+=amount;
//	std::cout << Name << " from ScavTrap repaired by " << amount << " points and have "
//			  << Energy_points << " energy points!" << std::endl;
//}

void ScavTrap::guardGate()
{
	std::cout << Name << " from ScavTrap enterred in Gate keeper mode!"
	<< std::endl;
}
