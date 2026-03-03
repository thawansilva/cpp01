#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "Human B was born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B died" << std::endl;
}

void	HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
