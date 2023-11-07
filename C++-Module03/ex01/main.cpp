#include "ScavTrap.hpp"

int main() 
{
    ScavTrap ScavTrapA("'ELITE CREW'");
    ScavTrap ScavTrapB("GIGN");

    std::cout << "\nStarting combat:" << std::endl;
    ScavTrapA.attack("GIGN");
    ScavTrapB.takeDamage(ScavTrapA.getAttackDamage());

    ScavTrapB.attack("ELITE CREW");
    ScavTrapA.takeDamage(ScavTrapB.getAttackDamage());

    std::cout << "\nRepair attempts:" << std::endl;
    ScavTrapA.beRepaired(10);
    ScavTrapB.beRepaired(10);
}