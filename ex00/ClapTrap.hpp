/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:01:48 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/10 16:38:13 by bkaras-g         ###   ########.fr       */
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
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;
public:
	ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &trap);
    ClapTrap    &operator=(const ClapTrap &trap);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;
    void        setName(std::string name);
    unsigned int getHitPoints(void) const;
    void        setHitPoints(unsigned int hitPoints);
    unsigned int getEnergyPoints(void) const;
    void        setEnergyPoints(unsigned int energyPoints);
    unsigned int getAttackDamage(void) const;
    void        setAttackDamage(unsigned int attackDamage);
};

#endif
