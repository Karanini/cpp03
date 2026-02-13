/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:01:19 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 14:34:38 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

typedef DiamondTrap DT;

DT::DiamondTrap() : ClapTrap(), _name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
}

DT::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap subject constructor called" << std::endl;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap    &DT::operator=(const DiamondTrap &trap)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &trap)
    {
        this->ClapTrap::operator=(trap);
		this->_name = trap._name;
    }
    return (*this);
}

