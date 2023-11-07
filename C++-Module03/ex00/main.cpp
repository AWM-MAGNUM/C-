#include "ClapTrap.hpp"

int main() 
{
    ClapTrap claptrapA("ELITE CREW");
    ClapTrap claptrapB("GIGN");

    // combat
    std::cout << "\nStarting combat:" << std::endl;
    claptrapA.attack("GIGN");
    claptrapB.takeDamage(claptrapA.getAttackDamage());

    claptrapB.attack("ELITE CREW");
    claptrapA.takeDamage(claptrapB.getAttackDamage());

    // Reparation
    std::cout << "\nRepair attempts:" << std::endl;
    claptrapA.beRepaired(1);
    claptrapB.beRepaired(1);
}