#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using namespace std;

class	ClapTrap
{
	public:
	ClapTrap( string name );
	~ClapTrap(void);
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	private:
	string	_name;
    int		_hitPoints;
	int		_energyPoints;
	int		_attackDamage;

};

#endif