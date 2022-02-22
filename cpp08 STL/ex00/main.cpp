# include "easyfind.hpp"

int main()
{
	std::vector<int> my_vector;
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			my_vector.push_back(i);
	}

	std::vector<int>::iterator it;
	it = my_vector.begin();
	while (it != my_vector.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;



	try
	{
		int search = easyfind(my_vector, 10);
		std::cout << "easyfind: "  << search << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout  << e.what() << std::endl;
	}

	try
	{
		int search = easyfind(my_vector, 11);
		std::cout << "easyfind: "  << search << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout  << e.what() << std::endl;
	}

	try
	{
		int search = easyfind(my_vector, 20);
		std::cout << "easyfind: "  << search<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout  << e.what() << std::endl;
	}

	return 0;
}

