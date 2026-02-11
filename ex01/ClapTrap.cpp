/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:10:37 by michel_32         #+#    #+#             */
/*   Updated: 2026/02/11 15:12:12 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

typedef ClapTrap CT;

/**************OCF functions**************************/

CT::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50),
_attack_damage(20)
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

/**************Game functions**************************/
/*
When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
Attacking cost 1 energy point. Of course, ClapTrap can’t do anything if it has
no hit points or energy points left.
*/
void CT::attack(const std::string &target)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
		std::cout << "No hit points or energy points left! You can't attack my friend" << std::endl;
	else
	{
		this->_energy_points--;
		std::cout << this->getName() << " attacks " << target << " !" << std::endl;
		std::cout << target << " looses " << this->getAttackDamage() << " hit points." << std::endl;
		if (this->getAttackDamage() <= 2)
			std::cout << "Ce n'est pas très efficace..." << std::endl;
		if (this->getAttackDamage() > 10)
			std::cout << "C'est super efficace!" << std::endl;
		std::cout << this->getName() << " has " << this->getEnergyPoints() << " energy points left.\n" << std::endl;
	}
}

void CT::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() <= 0)
		std::cout << this->getName() << " is already dead, let him rest in peace!\n" << std::endl;
	else
	{
		this->_hit_points -= amount;
		std::cout << this->getName() << " is under attack ! It looses " << amount << " hit points." << std::endl;
		std::cout << this->getName() << " has now " << this->getHitPoints() << " hit points.\n" << std::endl;
	}
}

/*
When ClapTrap repairs itself, it regains <amount> hit points. Attacking and repairing
each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or
energy points left.
*/

void CT::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
		std::cout << "No hit points or energy points left! You can't be repaired my friend" << std::endl;
	else
	{
		this->_hit_points += amount;
		std::cout << "A professional ClapTrap fixer repairs " << this->getName() << ", which gains back " << amount << " hit points." << std::endl;
		std::cout << this->getName() << " has now " << this->getHitPoints() << " hit points.\n" << std::endl;
	}
}

/**************Getters and Setters**************************/

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
