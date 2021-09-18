#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){}

Weapon::Weapon(void){}

Weapon::~Weapon(void){}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string const	&Weapon::getType(void)
{
	return (_type);
}