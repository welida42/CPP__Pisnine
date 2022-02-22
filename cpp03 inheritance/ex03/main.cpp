#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"



int main( void )
{
DiamondTrap D("diamond");

D.show();

//	D.FragTrap::attack("enemy_1");
//	D.ScavTrap::attack("enemy_1");
	D.attack("enemy");
	D.takeDamage(7);
	D.beRepaired(5);
	D.takeDamage(9);
	D.beRepaired(100);
	D.beRepaired(100);
	D.takeDamage(100);
	D.takeDamage(100);
	D.beRepaired(100);

	D.highFivesGuys();
	D.guardGate();
	D.whoAmI();

	return 0;
}
