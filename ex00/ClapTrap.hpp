#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage; 

	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif