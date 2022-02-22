#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap: virtual public  FragTrap, virtual public ScavTrap
{
private:
	std::string	Name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();

	void attack(std::string const & target);
//	void takeDamage(unsigned int amount);
//	void beRepaired(unsigned int amount);
	void whoAmI();
	void show();
};

#endif
