#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"Default constructor(FragTrap) called" << std::endl;
}

FragTrap::FragTrap(std::string const &obj)
{
    std::cout <<"Constructor parameter(FragTrap) called" << std::endl;
    Hitpoints = 100;
    Energy_points = 50;
    Attack_damage = 20;
    Name = obj;
}

void FragTrap::attack(const std::string& target)
{
    if(Energy_points > 0)
    {
        Energy_points--;
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << Name << "is out of energy and connot attack!" << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap" << Name <<  " requests a positive high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor(FragTrap) called" << std::endl;
}