#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	std::string str;
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		str = std::to_string(i);
		str+="_";
		str+=name;
		horde[i].set_name(str);
	}
	return horde;
}