#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string const &Name);
    void guardGate();
    void attack(const std::string& target);
    ~ScavTrap();
};

#endif