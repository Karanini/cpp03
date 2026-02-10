/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:01:48 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/10 11:09:36 by michel_32        ###   ########.fr       */
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
    ClapTrap();
    ClapTrap(ClapTrap &trap);
    ClapTrap    &operator=(const ClapTrap &trap);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif