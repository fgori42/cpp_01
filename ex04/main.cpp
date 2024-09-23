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
	std::string		allFile;
	size_t			poss;
	std::ifstream	suport;
	std::ofstream	exitFile;
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
	exitFile.open(newFile.c_str());
	if(!exitFile.is_open())
		return(status.badOutFile(2));
	while(getline(suport, buff))
	{
		buff += "\n";
		allFile += buff;
	}
	allFile = allFile.substr(0, allFile.length() - 1);
	do{
		poss = allFile.find(oldStr);
		if (poss == 0)
			exitFile << newStr;
		exitFile << allFile.substr(0, poss);
		if (poss > 0 && poss != std::string::npos)
			exitFile << newStr;
		if ((long long int)allFile.length() - (long long int)oldStr.length() > 0) 
		{
			allFile = allFile.substr(poss + oldStr.length(), allFile.length());
		}
	}while(poss != std::string::npos);
	suport.close();
	exitFile.close();
}