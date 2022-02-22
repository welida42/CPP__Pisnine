# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->Name = name;
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::attack_damage;
	ClapTrap::Name += "_clap_name";
	std::cout <<name << ": DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->Name << ": DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Diamond_name: " << this->Name << std::endl;
	std::cout << "Claptrap_name: " << ClapTrap::Name << std::endl;
}
void DiamondTrap::show()
{
	std::cout << "Diamond_name: " << this->Name << std::endl;
	std::cout << "(100) Hitpoints: " << this->Hitpoints << std::endl;
	std::cout << "(50) Energy_points: " << this->Energy_points << std::endl;
	std::cout << "(30) Attack_damage: " << this->Attack_damage << std::endl;
}
//void FragTrap::takeDamage(unsigned int amount)
//{
//	if (amount > Energy_points)
//		amount = Energy_points;
//	Energy_points -= amount;
//	std::cout << Name << " from FragTrap take a damage of " << amount
//			  << " points and have " << Energy_points << " energy points!" << std::endl;
//}
//
//void FragTrap::beRepaired(unsigned int amount)
//{
//	if (amount > 100 - Energy_points)
//		amount = 100 - Energy_points;
//	Energy_points+=amount;
//	std::cout << Name << " from FragTrap repaired by " << amount << " points and have "
//			  << Energy_points << " energy points!" << std::endl;
//}
//
//void FragTrap::highFivesGuys(void)
//{
//	std::cout  << Name << ": give me five!" << std::endl;
//}