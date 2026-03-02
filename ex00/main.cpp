#include "Zombie.hpp"

int main()
{
	randomChump("Ada");
	Zombie* thawan = newZombie("Thawan");
	thawan->announce();
	delete thawan;
	return 0;
}
