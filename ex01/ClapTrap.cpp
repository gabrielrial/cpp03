#include "ClapTrap.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << RED << "[ClapTrap] " << RESET << name << " Name Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << RED << "[ClapTrap]" << RESET << " Copy Constructor called" << std::endl;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << RED << "[ClapTrap]" << RESET << " Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "[ClapTrap] " << RESET << this->_name << " has been destructed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << RED << "[ClapTrap] " << RESET << this->_name
				  << " attacks " << target
				  << ", causing " << this->_attackDamage
				  << " points of damage!" << std::endl;

		this->_energyPoints--;
	}
	else
	{
		std::cout << RED << "[ClapTrap] " << RESET << this->_name
				  << " has no energy points left to attack!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int	real_amount;

	real_amount = amount;
	if (this->_energyPoints > 0 && this->_hitPoints < 10)
	{
		if ((real_amount + this->_hitPoints) > 10)
		{
			int real_amount = 10 - this->_hitPoints;
			this->_hitPoints += real_amount;
		}
		else
		{
			this->_hitPoints += real_amount;
		}
		std::cout << RED << "[ClapTrap] " << RESET << this->_name
				  << " repairs itself, restoring "
				  << real_amount << " hit points!" << std::endl;

		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << RED << "[ClapTrap] " << RESET << this->_name
				  << " has no energy points left to repair!" << std::endl;
	}
	else
	{
		std::cout << RED << "[ClapTrap] " << RESET << this->_name
				  << " is already at full health!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << "[ClapTrap] " << RESET << this->_name
			  << " takes " << amount
			  << " points of damage!" << std::endl;

	if ((int)amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << RED << "[ClapTrap] " << RESET << this->_name
				  << " has died!" << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name
				  << " has " << this->_hitPoints
				  << " hit points left!" << std::endl;
	}
}
