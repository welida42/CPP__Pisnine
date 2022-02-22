# include "ClassAMateria.hpp"

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &operand)
{
	if (this == &operand)
		return *this;
	this->type = operand.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}