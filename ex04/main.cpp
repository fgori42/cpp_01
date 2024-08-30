#include <iostream>
#include <string>
#include <fstream>
#include "Error.hpp"

int main(int ac, char *ag[])
{
	std::string		file;
	std::string		newFile;
	std::string		oldStr;
	std::string		newStr;
	std::string		buff;
	std::ifstream	suport;
	std::ofstream	exitfile;
	Error			status;

	if (ac != 4)
		return(status.wrongNumber(2));
	file = ag[1];
	oldStr = ag[2];
	newStr = ag[3];
	suport.open(file.c_str());
	if(!suport.is_open())
		return(status.badInFile(2));
	newFile = file + ".replace";
	exitfile.open(newFile.c_str());
	if(!exitfile.is_open())
		return(status.badOutFile(2));
	while(getline(suport, buff))
	{
		if (buff == oldStr)
			exitfile << newStr << std::endl;
		else
		{
			buff += "\n";
			exitfile << buff;
		}
	}
	suport.close();
	exitfile.close();
}