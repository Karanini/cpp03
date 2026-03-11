/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:04:30 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/03/11 11:19:33 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ex00/ClapTrap.hpp"
#include <string>
#include <iostream>

class	FragTrap: public ClapTrap
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
