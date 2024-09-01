#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "Harl: I love having extra bacon for my \
	7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
	std::cout << "Harl: I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "Harl: I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month" << std::endl;
}
void Harl::error( void )
{
	std::cout << "Harl: This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::unknown( void )
{
	std::cout << "Harl: It's impossible! I want, no, I demand something to complain about! " << std::endl;
}

void Harl::complain( std::string level )
{
	std::string	imput[4] = {"info", "debug", "error", "warning"};
	void	(Harl::*protocol[5])() = {&Harl::info, &Harl::debug, &Harl::error, &Harl::warning, &Harl::unknown};
	int i = 0;

	while (i < 4 && imput[i] != level)
		i++;
	(this->*protocol[i])();
}