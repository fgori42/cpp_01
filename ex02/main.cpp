#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "address of str = " << &str << std::endl;
	std::cout << "address of pointer = " << stringPTR << std::endl;
	std::cout << "address of reference = " << &stringREF << std::endl;

	std::cout << "valiue of str = " << str << std::endl;
	std::cout << "valiue of pointer = " << *stringPTR << std::endl;
	std::cout << "valiue of reference = " << stringREF << std::endl;
}