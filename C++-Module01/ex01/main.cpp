#include "Zombie.hpp"

int main()
{
    Zombie myZombie;
    int numZombie = 5;
    Zombie *heapHordeZombie = myZombie.zombieHorde(5,"kerberos");
    for(int i = 0; i < numZombie; i++)
        heapHordeZombie->announce();
    delete[] heapHordeZombie;
}