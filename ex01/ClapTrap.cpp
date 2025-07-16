#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	std::cout	<< "ClapTrap " << name
				<< " has been created" << std::endl;

	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< "ClapTrap " << this->_name
				<< " has been destructed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name
				  << " attacks " << target
				  << ", causing " << this->_attackDamage
				  << " points of damage!" << std::endl;

		this->_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name
				  << " has no energy points left to attack!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints < 10)
	{
		std::cout << "ClapTrap " << this->_name
				  << " repairs itself, restoring "
				  << amount << " hit points!" << std::endl;

		if ((amount + this->_hitPoints) > 10)
		{
			int new_amount = 10 - this->_hitPoints;
			this->_hitPoints += new_amount;
		}
		else
		{
			this->_hitPoints += amount;
		}

		this->_energyPoints--; // consume energía
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name
				  << " has no energy points left to repair!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name
				  << " is already at full health!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name
			  << " takes " << amount
			  << " points of damage!" << std::endl;

	if ((int)amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name
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
