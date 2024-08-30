#include "HumanB.hpp"


void	HumanB::attack()
{
	if (weapon != NULL)
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout <<this->name << " use his fist" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = 0;
	std::cout << name << " appear" << std::endl;
}

HumanB::~HumanB()
{
}