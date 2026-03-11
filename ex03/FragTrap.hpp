/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:04:30 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/03/11 11:36:37 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ex00/ClapTrap.hpp"
#include <string>
#include <iostream>

/*
* ex03: add virtual keyword so that only one instance of the base class
(ClapTrap) is created, even if it is inherited multiple times (by DiamondTrap)
*/
class	FragTrap: virtual public ClapTrap
{
protected:
	static const int _f_hit_points = 100;
    static const int _f_attack_damage = 30;
public:
	FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &trap);
    FragTrap    &operator=(const FragTrap &trap);
    ~FragTrap();

    void highFivesGuys(void);
};


#endif
