#include "Error.hpp"

Error::Error()
{
}

Error::~Error()
{
}

int	Error::wrongNumber(int	status)
{
	std::cout << "Error Wrong number of arguments" << std::endl;
	return (status);
}

int	Error::badInFile(int status)
{
	std::cout << "bad infile try whit anotherone" << std::endl;
	return(status);
}

int	Error::badOutFile(int status)
{
	std::cout << "impossible to create a outfile"<< std::endl;
	return(status);
}