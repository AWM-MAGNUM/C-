/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:52:51 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/04 20:54:31 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private :
        std::string Name;
        unsigned int Hitpoints;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public :
        ClapTrap();
        ClapTrap(std::string obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int getAttackDamage() const{
            return Attack_damage;
        }
        ~ClapTrap();
};
#endif