#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constructor(ScavTrap) called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &obj)
{
    std::cout << "Constructor parameter(ScavTrap) called " << std::endl;
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
    Name = obj;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap" << Name << " is now in Gate keeper mode!!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if (Energy_points > 0) 
    {
        Energy_points--;
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
    } 
    else 
        std::cout << "FragTrap " << Name << " is out of energy and cannot attack!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor(ScavTrap) called" << std::endl;
}