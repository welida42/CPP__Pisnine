#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP
# include <iostream>
# include <string>
# include "ClassAnimal.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	virtual void makeSound() const;
};

#endif
