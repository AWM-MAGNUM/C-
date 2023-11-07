#include "FragTrap.hpp"

int main() 
{
    FragTrap FragTrapA(" ELITE CREW");
    FragTrap FragTrapB(" GIGN");
    FragTrap highFive(" HIGH-FIVES");
    highFive.highFivesGuys();

    std::cout << "\nStarting combat:" << std::endl;
    FragTrapA.attack("GIGN");
    FragTrapB.takeDamage(FragTrapA.getAttackDamage());

    FragTrapB.attack("ELITE CREW");
    FragTrapA.takeDamage(FragTrapB.getAttackDamage());

    std::cout << "\nRepair attempts:" << std::endl;
    FragTrapA.beRepaired(10);
    FragTrapB.beRepaired(10);
}