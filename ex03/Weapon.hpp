#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
public:
	Weapon (std::string type);
	~Weapon ();
	void	getType() const;
	void	setType(std::string type);

private:
	std::string	&type;
};
#endif
