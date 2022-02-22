#include <string>
#include <iostream>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "please, enter only 1 argument" << std::endl;
		return (-1);
	}

	int c;
	int i;
	float f;
	double d;

	std::string arg = argv[1];

	try
	{
		c = static_cast<int>(stoi(arg));
		if (c < -127 || c > 127)
			std::cout << "char: impossible" << std::endl;
		else if (c < 32 || c == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	}
	catch (std::exception& exception)
	{
		if (arg.size() == 1)
			std::cout << "char: '" + arg + "'" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}

	try
	{
		i = static_cast<int>(stoi(arg));
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cout << "int: impossible" << std::endl;
	}

	try
	{
		f = static_cast<float>(stof(arg));
		if ((!arg.compare(0, 4, "nanf") && arg.size() > 4) ||
		(!arg.compare(0, 4, "+inf") && arg.size() > 4 && arg[4] != 'f') ||
		(!arg.compare(0, 4, "-inf") && arg.size() > 4 && arg[4] != 'f') ||
		(!arg.compare(0, 3, "inf") && arg.size() > 3 && arg[4] != 'f') ||
		(!arg.compare(0, 5, "+inff") && arg.size() > 5) ||
		(!arg.compare(0, 5, "-inff") && arg.size() > 5) ||
		(!arg.compare(0, 4, "inff") && arg.size() > 4) ||
		(!arg.compare(0, 3, "nan") && arg.size() > 3 && arg[3] != 'f'))
			std::cout << "float: impossible" << std::endl;
		else
		{
			std::cout << "float: " << f;
			if (i == f)
				std::cout << ".0";
			std::cout << "f" << std::endl;
		}
	}
	catch (std::exception& exception)
	{
		std::cout << "float: impossible" << std::endl;
	}

	try
	{
		d = static_cast<double>(stod(arg));
		if ((!arg.compare(0, 4, "nanf") && arg.size() > 4) ||
		(!arg.compare(0, 4, "+inf") && arg.size() > 4 && arg[4] != 'f') ||
		(!arg.compare(0, 4, "-inf") && arg.size() > 4 && arg[4] != 'f') ||
		(!arg.compare(0, 3, "inf") && arg.size() > 3 && arg[4] != 'f') ||
		(!arg.compare(0, 5, "+inff") && arg.size() > 5) ||
		(!arg.compare(0, 5, "-inff") && arg.size() > 5) ||
		(!arg.compare(0, 4, "inff") && arg.size() > 4) ||
		(!arg.compare(0, 3, "nan") && arg.size() > 3 && arg[3] != 'f'))
			std::cout << "double: impossible" << std::endl;
		else
		{
			std::cout << "double: " << d;
			if (i == d)
				std::cout << ".0";
			std::cout << std::endl;
		}
	}
	catch (std::exception& exception)
	{
		std::cout << "double: impossible" << std::endl;
	}
	return 0;
}
