#include "Zombie.hpp"

int main(void)
{
	Zombie zmb("Welida");
	zmb.announce();

	Zombie *zmb_new = newZombie("Welida_in_heap_newZombie");
	zmb_new->announce();

	randomChump("Welida_in_stack_randomChump");
	delete zmb_new;
	return (0);
}
