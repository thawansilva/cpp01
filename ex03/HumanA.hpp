#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.h"

class HumanA
{
public:
	HumanA(std::string, Weapon weapon);
	~HumanA();

	void	attack() const;

private:
	std::string	_name;
	Weapon		_weapon;
};
#endif
