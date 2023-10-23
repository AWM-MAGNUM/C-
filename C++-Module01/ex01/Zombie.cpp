#include "Zombie.hpp"

void Zombie::setName(const std::string & zombieName) 
{
    name = zombieName;
}

void Zombie::announce() 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() 
{
    if (!name.empty())
        std::cout << name << ": Is destroyed" << std::endl;
}
