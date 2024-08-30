#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
}
void Harl::info( void )
{

}
void Harl::warning( void )
{

}
void Harl::error( void )
{

}

void Harl::complain( std::string level )
{
	std::string	imput[4] = {};
	void	(Harl::*protocol[4])() = {};
}