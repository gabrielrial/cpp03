#include "FragTrap.hpp"

#define YELLOW "\033[33m"
#define RESET "\033[0m"


FragTrap::FragTrap() : ClapTrap()
{
	std::cout << YELLOW <<"[FragTrap] " << RESET << "Default Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << YELLOW <<"[FragTrap] " << RESET << name << "Name Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << YELLOW <<"[FragTrap] " << RESET << "Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << YELLOW <<"[FragTrap] " << RESET << "Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW  << _name <<  RESET << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << YELLOW  << _name <<  RESET << " requests a high five! ✋" << std::endl;
}

void FragTrap::setName(const std::string name)
{
	this->_name = name;
}
