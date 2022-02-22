#ifndef CLASSCURE_HPP
# define CLASSCURE_HPP
# include <iostream>
# include <string>

# include "ClassAMateria.hpp"

class AMateria;
class ICharacter;

class Cure : public AMateria
{
private:
	std::string type;
public:
	Cure();
	Cure(const Cure &copy);
	virtual ~Cure();
	Cure &operator=(const Cure &operand);
	Cure* clone() const;
	void use(ICharacter &target);
};

#endif
