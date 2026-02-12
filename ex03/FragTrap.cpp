/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michel_32 <michel_32@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:02:40 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/12 14:43:12 by michel_32        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

typedef FragTrap FT;

/*
• Name, which is passed as a parameter to the constructor
• Hit points (100), representing the health of the ClapTrap
• Energy points (100)
• Attack damage (30)
*/
FT::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

/*
* No need to write `*this = trap` because the `ClapTrap(trap)` call
* already initializes the member objects with the values stored in
* `trap`
*/
FT::FragTrap(const FragTrap &trap) : ClapTrap(trap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

/*
*Technically possible not to implement this function, so that the
* `ClapTrap::operator=()` function is called automatically with
* `FragTrap` objects by inheritance. But all the classes must have
* OCF form to satisfy 42's subjects requirements.
*/
FragTrap    &FT::operator=(const FragTrap &trap)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &trap)
    {
        this->ClapTrap::operator=(trap);
    }
    return (*this);
}

FT::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FT::highFivesGuys(void)
{
	std::cout << "FragTrap requests a positive high-fives (wtf ?)" << std::endl;
}


