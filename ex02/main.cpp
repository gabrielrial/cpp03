#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    {
        FragTrap ft("Normal");
        FragTrap ft_copy(ft);
        FragTrap ft_equal = ft;

        ft.highFivesGuys();
        ft_equal.highFivesGuys();
        ft.attack("Chewbacca");
        ft.takeDamage(99);
        ft_equal.beRepaired(2);
        ft_equal.takeDamage(2);
        ft_equal.takeDamage(1);
    }
}