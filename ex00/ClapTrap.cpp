/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:10:37 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/10 16:31:12 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

typedef ClapTrap CT;

CT::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10),
_attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

CT::ClapTrap(const ClapTrap &trap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = trap;
}

ClapTrap    &CT::operator=(const ClapTrap &trap)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &trap)
    {
        this->_name = trap._name;
        this->_hit_points = trap._hit_points;
        this->_energy_points = trap._energy_points;
        this->_attack_damage = trap._attack_damage;
    }
    return (*this);
}

CT::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string CT::getName(void) const
{
    return (_name);
}

void CT::setName(std::string name)
{
    this->_name = name;
}

int CT::getHitPoints(void) const
{
    return (_hit_points);
}

void CT::setHitPoints(int hitPoints)
{
    this->_hit_points = hitPoints;
}

int CT::getEnergyPoints(void) const
{
    return (_energy_points);
}

void CT::setEnergyPoints(int energyPoints)
{
    this->_energy_points = energyPoints;
}

int CT::getAttackDamage(void) const
{
    return (_attack_damage);
}

void CT::setAttackDamage(int attackDamage)
{
    this->_attack_damage = attackDamage;
}
