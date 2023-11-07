#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    Name = "";    
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string &obj)
{
    std::cout << "Constructor Parametre called" << std::endl;
    Name = obj;   
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if(Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage! " << std::endl;
    }  
    else
        std::cout << "ClapTrap " << Name << " is out of energy and cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTRap " << Name << " is attacked, losing " << amount << " points of damage!" << std::endl;
    
    if(amount >= Hitpoints)
    {
        Hitpoints = 0;
        std::cout << "ClapTRap " << Name << " has been destroyed!" << std::endl;
    }
    else
    {
        Hitpoints -= amount;
        std::cout << "ClapTrap " << Name << " now has " << Hitpoints << " Hit points left" << std::endl; 
    }
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (Energy_points > 0 && Hitpoints > 0) 
    {
        Hitpoints = std::min(Hitpoints + amount, 10u); 
        Energy_points--;
        std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " points hit points are now " << Hitpoints << ", energy points left: " << Energy_points << std::endl;
    } 
    else 
    {
        if (Hitpoints <= 0) 
            std::cout << "ClapTrap " << Name << " cannot be repaired because it's out of hit points!" << std::endl;
        else 
            std::cout << "ClapTrap " << Name << " cannot be repaired because it's out of energy points!" << std::endl;
    }
}

ClapTrap:: ~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}