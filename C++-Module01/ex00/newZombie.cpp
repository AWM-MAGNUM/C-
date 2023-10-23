#include "Zombie.hpp"

Zombie* Zombie::newZombie(const std::string &name)
{
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    return newZombie;
}