#include "Zombie.hpp"

int	main()
{
	int	nb = 10;
	Zombie	*Horde;

	Horde = zombieHorde(nb, "Homer");
	for (int i = 0; i < nb; i++)
	{
		Horde[i].announce();
	}
	delete[] Horde;
	return (1);
}