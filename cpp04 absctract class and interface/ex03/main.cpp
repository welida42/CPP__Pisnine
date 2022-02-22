# include "ClassIMateriaSource.hpp"
# include "ClassCharacter.hpp"
# include "ClassIce.hpp"
# include "ClassCure.hpp"
# include "ClassAMateria.hpp"
# include "ClassMateriaSource.hpp"
# include "ClassICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	ICharacter* bob = new Character("bob");
//
//	Character A("I");
//	A.equip(tmp);
//	A.use(0, *bob);
//	Character B(A);
//	A.unequip(0);
//	A.use(0, *bob);
//	B.use(0, *bob);


	return 0;
}
