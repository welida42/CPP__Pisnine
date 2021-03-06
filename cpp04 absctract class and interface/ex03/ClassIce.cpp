# include "ClassIce.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &copy) : AMateria(copy) {}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &operand)
{
	if (this == &operand)
		return *this;
	type = operand.type;
	return *this;
}

Ice *Ice::clone() const
{
	Ice *res = new Ice();
	return res;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
}

