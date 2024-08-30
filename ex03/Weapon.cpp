#include "Weapon.hpp"

Weapon::Weapon(std::string typeOfWeapon)
{
	this->type = typeOfWeapon;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string	&Weapon::getType()
{
	std::string	&ref = this->type;

	return (ref);
}