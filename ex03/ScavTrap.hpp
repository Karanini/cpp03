/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:04:30 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 13:12:03 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

/*
* ex03: add virtual keyword so that only one instance of the base class
(ClapTrap) is created, even if it is inherited multiple times (by DiamondTrap)
*/
class	ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &trap);
    ScavTrap    &operator=(const ScavTrap &trap);
    ~ScavTrap();

    void attack(const std::string& target);
	void guardGate();
};


#endif
