#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	void setName(const std::string name);

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);

private:
};

#endif
