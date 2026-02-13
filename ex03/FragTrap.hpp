/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:04:30 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 13:10:51 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

/*
* ex03: add virtual keyword so that only one instance of the base class
(ClapTrap) is created, even if it is inherited multiple times (by DiamondTrap)
*/
class	FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &trap);
    FragTrap    &operator=(const FragTrap &trap);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif
