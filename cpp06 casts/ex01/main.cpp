
#include <cstdio>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *test = new Data;
	std::cout << test << std::endl;
	test->name = "welida";
	test->a = 90;

	uintptr_t seria = serialize(test);
	std::cout << seria << std::endl;
	Data *test2 = deserialize(seria);
	std::cout << test2 << std::endl;
	std::cout << test->name  << " - " << test->a << std::endl;
	std::cout << test2->name << " - " << test2->a << std::endl;
	return 0;
}