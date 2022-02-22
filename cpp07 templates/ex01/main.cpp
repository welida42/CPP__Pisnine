#include "iter.hpp"



int main()
{
	float f_tab[5] = {0.01, 1.1, 2.2, 3.3, 4.4};
	iter(f_tab, 5, &print);
	std::string	peers[4] = {"welida", "dtawney", "lruthan", "bashleige"};
	iter(peers, 4, &print);

	std::cout << "-------------------" << std::endl;

	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, &print);
	iter(tab2, 5, &print);

	return 0;
}
