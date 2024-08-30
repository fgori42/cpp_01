#ifndef	ERROR_HPP
# define ERROR_HPP

#include <iostream>

class Error
{
private:
	
public:
	int	wrongNumber(int	status);
	int	badInFile(int status);
	int	badOutFile(int status);
	Error();
	~Error();
};

#endif