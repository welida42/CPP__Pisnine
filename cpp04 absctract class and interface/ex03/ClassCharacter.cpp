# include "ClassCharacter.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	std::cout << "copy" << std::endl;
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

Character &Character::operator=(const Character &operand)
{
	std::cout << "asignation" << std::endl;
	if (this == &operand)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			inventory[i] = NULL;
		if (operand.inventory[i])
			inventory[i] = operand.inventory[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
		for (int i = 0; i < 4; i++)
			if (this->inventory[i] == m)
				return ;
		for (int i = 0; i < 4; i++)
		{
			if (!this->inventory[i])
			{
				this->inventory[i] = m;
				return ;
			}
		}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
