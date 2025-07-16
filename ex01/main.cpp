#include "ClapTrap.hpp"

int main (void)
{
    ClapTrap cp0("USER");
    ClapTrap cp1("ADMIN");

    cp0.attack("USER");
    cp0.takeDamage(10);
    cp0.takeDamage(10);

    cp1.takeDamage(5);
    cp1.beRepaired(7);
    cp1.takeDamage(8);
    for (int i = 0; i < 9; i++)
        cp1.beRepaired(1);
    cp1.attack("You");
    cp1.attack("You");
}