#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << name << " zombie spown" << std::endl;
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " zombie is dead again" << std::endl;
}