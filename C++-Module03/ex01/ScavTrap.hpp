#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string const &obj);
    void guardGate();
    void attack(const std::string& target);
    unsigned int getAttackDamage() const
    {   
      return Attack_damage;
    }
    ~ScavTrap();
};

#endif