# include "ClassMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& operand)
{
	for (int i = 0; i < 4; i++)
		materias[i] = operand.materias[i];
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
		if (!materias[i])
		{
			materias[i] = mat;
			return ;
		}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (0);
}