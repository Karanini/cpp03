/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:01:48 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/10 16:31:12 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class   ClapTrap
{
private:
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &trap);
    ClapTrap    &operator=(const ClapTrap &trap);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;
    void        setName(std::string name);
    int         getHitPoints(void) const;
    void        setHitPoints(int hitPoints);
    int         getEnergyPoints(void) const;
    void        setEnergyPoints(int energyPoints);
    int         getAttackDamage(void) const;
    void        setAttackDamage(int attackDamage);
};

#endif
