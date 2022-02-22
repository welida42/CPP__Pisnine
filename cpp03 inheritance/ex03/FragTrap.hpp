#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	unsigned int attack_damage;
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();

	void attack(std::string const & target);
//	void takeDamage(unsigned int amount);
//	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};

#endif
