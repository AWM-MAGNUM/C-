#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default (ScavTrap) constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
    std::cout << "Parametrized constructor called for ScavTrap " << name << std::endl;
    Hitpoints = 100;
    Energy_points = 50;
    Attack_damage = 20;
    Name = name;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap" << Name << " is now in Gate keeper mode!!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if (Energy_points > 0) 
    {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    } 
    else 
        std::cout << "ScavTrap " << Name << " is out of energy and cannot attack!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called for " << Name << std::endl;
}