/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:10:37 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/10 11:20:08 by michel_32        ###   ########.fr       */
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