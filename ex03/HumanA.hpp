#ifndef HUMANA_HPP
# define HUMANA_HPP

# include	<iostream>
# include	"Weapon.hpp"

class HumanA
{
private:
	Weapon		*weapon;
	std::string	name;
public:
	void	attack();

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif