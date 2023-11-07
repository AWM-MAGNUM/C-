#include "ClapTrap.hpp"

int main() 
{
    ClapTrap claptrapA("ELITE CREW");
    ClapTrap claptrapB("GIGN");

    std::cout << "\nStarting combat:" << std::endl;
    claptrapA.attack("GIGN");
    claptrapB.takeDamage(claptrapA.getAttackDamage());

    claptrapB.attack("ELITE CREW");
    claptrapA.takeDamage(claptrapB.getAttackDamage());

    std::cout << "\nRepair attempts:" << std::endl;
    claptrapA.beRepaired(5);
    claptrapB.beRepaired(5);
}