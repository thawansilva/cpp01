#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.h"

class HumanB
{
public:
	HumanB(std::string);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon weapon);

private:
	std::string	_name;
	Weapon		_weapon;
};
#endif
