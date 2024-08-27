#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*Horde;

	if (N < 1)
	{
		std::cout << "A Zombie horde need almost one zombie" << std::endl;
		return (NULL);
	}
	Horde = new Zombie[N];
	if (Horde == NULL)
	{
		std::cout << "I can't find Horde" << std::endl;
		return(NULL);
	}
	for(int i = 0; i < N; i++)
	{
		Horde[i].setName(name);
	}
	return (Horde);
}