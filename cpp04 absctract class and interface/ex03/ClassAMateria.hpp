#ifndef CLASSAMATERIA_HPP
# define CLASSAMATERIA_HPP
# include <iostream>
# include <string>
# include "ClassICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &operand);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
