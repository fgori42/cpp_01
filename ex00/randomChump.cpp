#include "Zombie.hpp"

void	randomChump( std::string name)
{
	Zombie *newZombie;
	newZombie = new Zombie(name);
	newZombie->announce();
	delete newZombie;
}