#include "ScavTrap.hpp"


// int main() 
// {
//     ScavTrap defaultScav;
//     ScavTrap namedScav("ELITE CREW");
//     namedScav.attack("GIGN");
//     namedScav.takeDamage(10);
//     namedScav.beRepaired(10);
//     namedScav.guardGate();
//     return 0;
// }


int main() 
{
    ScavTrap ScavTrapA("ELITE CREW");
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