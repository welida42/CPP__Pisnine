#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassWrongCat.hpp"
#include "ClassWrongAnimal.hpp"
int main( void )
{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

	delete(i);
	delete(j);
	delete(meta);

	const WrongAnimal* A = new WrongCat();
	std::cout << A->getType() << " " << std::endl;
	A->makeSound();
	delete(A);

	return 0;
}
