/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:33:19 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/05 17:33:26 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = "";    
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string obj) : Name(obj), Hitpoints(10), Energy_points(10), Attack_damage(0) 
{
    std::cout << "Constructor Parametre called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->Energy_points > 0)
    {
        this->Energy_points--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage! " << std::endl;
    }  
    else
        std::cout << "ClapTrap " << this->Name << " is out of energy and cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTRap " << this->Name << " is attacked, losing " << amount << " points of damage!" << std::endl;
    
    if(amount >= this->Hitpoints)
    {
        this->Hitpoints = 0;
        std::cout << "ClapTRap " << this->Name << " has been destroyed!" << std::endl;
    }
    else
    {
        this->Hitpoints -= amount;
        std::cout << "ClapTrap " << this->Name << " now has" << this->Hitpoints << " Hit points left" << std::endl; 
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