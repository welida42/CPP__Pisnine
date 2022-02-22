#ifndef CLASSCAT_HPP
# define CLASSCAT_HPP
# include <iostream>
# include <string>
# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &operand);

	virtual void makeSound() const;
	void setIdeas(std::string idea);
	std::string *getIdeas() const;
};

#endif
