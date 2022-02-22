#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name.assign(name);
}

void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is died (destructor called)" << std::endl;
}
