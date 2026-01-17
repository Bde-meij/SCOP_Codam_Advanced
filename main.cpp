#include <iostream>
#include "ObjParser.cpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return (std::cout << "did not receive obj file" << std::endl, 0);
	
	ObjParser obj;
	obj.Parse(av[1]);
}