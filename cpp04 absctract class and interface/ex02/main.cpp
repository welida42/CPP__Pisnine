#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassBrain.hpp"
int main( void )
{
	int size = 20;
	Animal **animals = new Animal*[size];
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		animals[i]->makeSound();
	}
	std::cout << "---------------------------" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];
	delete [] animals;
	std::cout << "---------------------------" << std::endl;

	Cat C;
	{
		Cat tmp(C);
		std::cout << tmp.getIdeas()[0] << std::endl;
	}
	std::cout << C.getIdeas()[0] << std::endl;
//	Animal a;
	return 0;
}
