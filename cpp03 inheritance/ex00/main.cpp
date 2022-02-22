#include "ClapTrap.hpp"


int main( void )
{
	ClapTrap A("welida");

	A.attack("enemy");
	A.takeDamage(7);
	A.beRepaired(5);
	A.takeDamage(9);
	A.beRepaired(100);
	A.beRepaired(100);
	A.takeDamage(50);
	A.takeDamage(100);
	A.beRepaired(100);
	return 0;
}
