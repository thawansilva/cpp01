Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::getType() const
{
	return (this->type);
}

Weapon::setType(std::string type)
{
	this->type = type;
}
