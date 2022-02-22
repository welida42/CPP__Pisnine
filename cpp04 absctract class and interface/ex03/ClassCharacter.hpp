#ifndef CLASSCHARACTER_HPP
# define CLASSCHARACTER_HPP
# include <iostream>
# include <string>

# include "ClassICharacter.hpp"
class ICharacter;

class Character : public ICharacter
{
private:
	AMateria *inventory[4];
	std::string name;
public:
	Character(std::string name);
	Character(Character const &copy);
	virtual ~Character();
	Character &operator=(Character const &operand);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
