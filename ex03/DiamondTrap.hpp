/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:40:00 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 14:44:10 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &trap);
    DiamondTrap    &operator=(const DiamondTrap &trap);
    ~DiamondTrap();
	using	ScavTrap::attack; //use the attack() from ScavTrap
	void	whoAmI();
};


#endif
