#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " zombie spown" << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " zombie is dead again" << std::endl;
}