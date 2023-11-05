/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:37:04 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/05 17:34:01 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
    ClapTrap claptrapA("ELITE CREW");
    ClapTrap claptrapB("GIGN");

    // combat
    std::cout << "\nStarting combat:" << std::endl;
    claptrapA.attack("GIGN");
    claptrapB.takeDamage(claptrapA.getAttackDamage());

    claptrapB.attack("ELITE CREW");
    claptrapA.takeDamage(claptrapB.getAttackDamage());

    // Reparation
    std::cout << "\nRepair attempts:" << std::endl;
    claptrapA.beRepaired(1);
    claptrapB.beRepaired(1);
}