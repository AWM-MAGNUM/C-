#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string & zombieName) {
    name = zombieName;
}

Zombie::~Zombie() {
    std::cout << name << " : Is destroyed" << std::endl;
}