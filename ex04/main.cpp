#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <target> <replacement>" << std::endl;
		return 0;
	}
	std::string file = argv[1];
	std::string txtTarget = argv[2];
	std::string txtReplacement = argv[3];
	return 0;
}
