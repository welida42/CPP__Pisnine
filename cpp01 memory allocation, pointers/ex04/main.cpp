
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "expected 3 argumets (filename, old_string, new_string)"
				  << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	if (filename.empty())
	{
		std::cout << "filename is empty" << std::endl;
		return 1;
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream input;
	std::ofstream output;

	input.open(filename);
	if ((input.is_open()) == 0)
	{
		std::cout << "open error in old file" << std::endl;
		return 1;
	}
	filename += ".replace";
	output.open(filename);
	if (output.is_open() == 0)
	{
		std::cout << "open error in new file" << std::endl;
		return 1;
	}

	size_t pos = 0;
	std::string line;
	while (getline(input, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output << line;
		if (input.eof() == 0)
			output << std::endl;
	}
	input.close();
	output.close();
	return 0;
}
