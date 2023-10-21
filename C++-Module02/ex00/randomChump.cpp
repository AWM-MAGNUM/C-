#include "Zombie.hpp"

void randomChump(const std::string &name)
{
    Zombie chump;
    chump.setName(name);
    chump.announce();
}