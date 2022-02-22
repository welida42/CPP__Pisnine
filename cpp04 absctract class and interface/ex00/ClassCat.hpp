#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP
# include <iostream>
# include <string>
# include "ClassAnimal.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	virtual void makeSound() const;
};

#endif
