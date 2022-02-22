#ifndef CLASSMATERIASOURCE_HPP
# define CLASSMATERIASOURCE_HPP
# include <iostream>
# include <string>

# include "ClassIMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria			*materias[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& copy);
	MateriaSource& operator=(const MateriaSource& operand);

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif
