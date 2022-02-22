# include <cstdlib>
# include "ClassA.hpp"
# include "ClassB.hpp"
# include "ClassC.hpp"

Base * generate(void)
{
	srand(time(0));
	int random = rand();

	if (random % 3 == 1)
	{
	//	std::cout << "generated A" << std::endl;
		return (new A());
	}
	else if (random % 3 == 2)
	{
	//	std::cout << "generated B" << std::endl;
		return (new B());
	}
	else
	{
	//	std::cout << "generated C" << std::endl;
		return (new C());
	}
}
void identify(Base* p)
{
	A *a_ptr = dynamic_cast<A*>(p);
	B *b_ptr = dynamic_cast<B*>(p);
	C *c_ptr = dynamic_cast<C*>(p);

	if (a_ptr)
		std::cout << "A" << std::endl;
	if (b_ptr)
		std::cout << "B" << std::endl;
	if (c_ptr)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::exception &exception)
	{
	//	 std::cout << "exception in A" << std::endl;
	}
	try
	{
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "B" << std::endl;
	}
	catch (std::exception &exception)
	{
	//	 std::cout << "exception in B" << std::endl;
	}
	try
	{
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "C" << std::endl;
	}
	catch (std::exception &exception)
	{
	//	 std::cout << "exception in C" << std::endl;
	}
}

int main()
{
 	Base *base = generate();
	identify(base);
	identify(*base);

//	B b;
//	identify(&b);
//	identify(b);
	return 0;
}