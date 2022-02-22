# include "ClassCure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &copy) : AMateria(copy) {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &operand)
{
	if (this == &operand)
		return *this;
	type = operand.type;
	return *this;
}

Cure *Cure::clone() const
{
	Cure *res = new Cure();
	return res;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}