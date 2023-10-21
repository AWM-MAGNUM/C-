#include "Zombie.hpp"

int main()
{
    Zombie Kerberos;
    Zombie myZombie;

    Kerberos.setName("Kerberos");
    Kerberos.announce();

    myZombie.setName("Iphone");
    myZombie.announce();

    Zombie *heapZombie = myZombie.newZombie("Mac");
    heapZombie->announce();
    delete heapZombie;
}