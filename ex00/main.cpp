#include "ClapTrap.hpp"

int main(void)
{
	{
		std::cout << std::endl
				  << "--------------------------------------------------------- TEST 1" << std::endl
				  << std::endl;

		ClapTrap cp0("USER");

		cp0.attack("XX");
		cp0.takeDamage(10);
	}
	std::cout << std::endl
			  << "----------------------------------------------------------------" << std::endl
			  << std::endl;
	{
		std::cout << std::endl
				  << "--------------------------------------------------------- TEST 2" << std::endl
				  << std::endl;

		ClapTrap cp1("ADMIN");

		cp1.takeDamage(5);
		cp1.beRepaired(7);
		cp1.takeDamage(8);
		for (int i = 0; i < 9; i++)
			cp1.beRepaired(1);
		cp1.attack("You");
		cp1.attack("You");

		std::cout << std::endl
				  << "----------------------------------------------------------------" << std::endl
				  << std::endl;
	}
}