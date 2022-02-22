#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string	Name;
	unsigned int Hitpoints;
	unsigned int Energy_points;
	unsigned int Attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &old);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &operand);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
