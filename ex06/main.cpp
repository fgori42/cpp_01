#include "Harl.hpp"

int main(int ac, char *ag[])
{
	Harl harl;

	if (ac != 2)
		return((std::cout << "Don't risk it, choose just one topic or Harl will talk for hours." << std::endl), 0);
	harl.complain(ag[1]);
}