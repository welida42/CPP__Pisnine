#ifndef CLASSWRONGCAT_HPP
# define CLASSWRONGCAT_HPP
# include <iostream>
# include <string>
# include "ClassWrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat & operand);
	void makeSound() const;
};
#endif
