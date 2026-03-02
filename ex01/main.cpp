#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(5, "Thawan");
	delete []horde;
	return 0;
}
