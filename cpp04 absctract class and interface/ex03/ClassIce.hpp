#ifndef CLASSICE_HPP
# define CLASSICE_HPP
# include <iostream>
# include <string>

# include "ClassAMateria.hpp"

class AMateria;
class ICharacter;

class Ice : public AMateria
{
private:
	std::string type;
public:
	Ice();
	Ice(const Ice &copy);
	virtual ~Ice();
	Ice &operator=(const Ice &operand);
	Ice* clone() const;
	void use(ICharacter &target);
};

#endif
