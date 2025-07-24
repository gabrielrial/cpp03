#include "ScavTrap.hpp"

#define GREEN "\033[1;32m"
#define RESET "\033[0m"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << GREEN <<"[ScavTrap]" << RESET << " Default Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN << "[ScavTrap] " << RESET << name << " Name Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << GREEN << "[ScavTrap] " << RESET << "Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << GREEN << "[ScavTrap] " << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "[ScavTrap] " << RESET <<  _name << " has been destroyed!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << GREEN << "[ScavTrap] " << RESET << this->_name << " is now guarding the gate." << std::endl;
}
