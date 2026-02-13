/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:01:19 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 13:14:17 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

typedef DiamondTrap DT;

DT::DiamondTrap() : ClapTrap(), _name("default")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
}
