#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name(name), _weapon(weapon)
{
	std::cout << "Human A was born" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A died" << std::endl;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
