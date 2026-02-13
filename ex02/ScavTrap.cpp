/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:02:40 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/12 10:35:30 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

typedef ScavTrap ST;

ST::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

/*
ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly) and
must initialize them to:
• Name, which is passed as a parameter to the constructor
• Hit points (100), representing the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
*/
ST::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

/*
* No need to write `*this = trap` because the `ClapTrap(trap)` call
* already initializes the member objects with the values stored in
* `trap`
*/
ST::ScavTrap(const ScavTrap &trap) : ClapTrap(trap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

/*
*Technically possible not to implement this function, so that the
* `ClapTrap::operator=()` function is called automatically with
* `ScavTrap` objects by inheritance. But all the classes must have
* OCF form to satisfy 42's subjects requirements.
*/
ScavTrap    &ST::operator=(const ScavTrap &trap)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &trap)
    {
        this->ClapTrap::operator=(trap);
    }
    return (*this);
}

ST::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ST::attack(const std::string& target)
{
	std::cout << "A savage ScavTrap attacks!" << std::endl;
	this->ClapTrap::attack(target);
}

void ST::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
}

