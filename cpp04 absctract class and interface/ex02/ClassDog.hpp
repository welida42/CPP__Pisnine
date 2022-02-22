#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP
# include <iostream>
# include <string>
# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &operand);

	virtual void makeSound() const;
	void setIdeas(std::string idea);
	std::string *getIdeas() const;
};

#endif
