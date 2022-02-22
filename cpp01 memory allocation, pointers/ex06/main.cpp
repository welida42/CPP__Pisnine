
#include <iostream>
#include <string>
#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	switch (argc)
	{
		case (2):
			break;
		default:
			return 0;
	}

	std::string str = argv[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int res = -1;
	for (int i = 0; i < 4; i++)
	{
		res = (!str.compare(levels[i])) ? i : -1;
		(res >= 0 && res <= 3) ? (i = 4) : (i += 0);
	}

	switch (res)
	{
		case (0) :
			std::cout << "[DEBUG]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case (1) :
			std::cout << "[INFO]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case (2) :
			std::cout << "[WARNING]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case (3) :
			std::cout << "[ERROR]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems"
						 " ]" << std::endl;
	}
	return 0;
}
