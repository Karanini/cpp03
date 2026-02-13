/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:01:19 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 16:11:27 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

typedef DiamondTrap DT;

DT::DiamondTrap() : ClapTrap(), _name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
}

DT::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap subject constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = FragTrap::_f_hit_points;
	this->_energy_points = ScavTrap::_s_energy_points;
	this->_attack_damage = FragTrap::_f_attack_damage;
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

DT::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DT::whoAmI()
{
	std::cout << "My DiamondTrap name is " << this->_name << "\n";
	std::cout << "My ClapTrap name is " << this->ClapTrap::_name << std::endl;
}

