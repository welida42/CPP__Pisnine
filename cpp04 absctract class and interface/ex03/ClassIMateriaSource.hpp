#ifndef CLASSIMATERIASOURCE_HPP
# define CLASSIMATERIASOURCE_HPP
# include <iostream>
# include <string>
# include "ClassAMateria.hpp"


class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
