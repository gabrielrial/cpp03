#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    {
        FragTrap ft("Normal");
        FragTrap ft_copy(ft);
        FragTrap ft_equal = ft;
        std::cout << std::endl << "-----------------------------------------------" << std::endl;
        ft.highFivesGuys();
        ft_copy.highFivesGuys();
        ft_equal.highFivesGuys();

        std::cout << std::endl << "-----------------------------------------------" << std::endl;

        ft_copy.setName("NotSame");
        ft_equal.highFivesGuys();
        ft_equal.setName("IsSame");

        std::cout << std::endl << "-----------------------------------------------" << std::endl;

        ft.highFivesGuys();
        ft_copy.highFivesGuys();
        ft_equal.highFivesGuys();

        std::cout << std::endl << "-----------------------------------------------" << std::endl;

        ft.attack("Chewbacca");
        ft.takeDamage(99);
        ft_equal.beRepaired(2);
        ft_equal.takeDamage(2);
        ft_equal.takeDamage(1);
    }
}