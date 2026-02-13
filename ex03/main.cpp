/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:24:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/13 14:54:06 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--- CREATING DIAMONDTRAP ---" << std::endl;
	DiamondTrap dt("Shiny");

	std::cout << "\n--- IDENTITY TEST ---" << std::endl;
	dt.whoAmI();

	std::cout << "\n--- ATTRIBUTES TEST ---" << std::endl;
	std::cout << "ClapTrap Name: " << dt.getName() << " (Expected: Shiny_clap_name)" << std::endl;
	std::cout << "Hit Points:    " << dt.getHitPoints() << " (Expected: 100)" << std::endl;
	std::cout << "Energy Points: " << dt.getEnergyPoints() << " (Expected: 50)" << std::endl;
	std::cout << "Attack Damage: " << dt.getAttackDamage() << " (Expected: 30)" << std::endl;

	std::cout << "\n--- ATTACK TEST (SHOULD BE SCAVTRAP ATTACK) ---" << std::endl;
	dt.attack("an intruder");

	std::cout << "\n--- INHERITED TRAITS TEST ---" << std::endl;
	dt.guardGate();      // From ScavTrap
	dt.highFivesGuys();  // From FragTrap

	std::cout << "\n--- BASIC CLAPTRAP ACTIONS ---" << std::endl;
	dt.takeDamage(30);
	dt.beRepaired(20);

	std::cout << "\n--- CLEANUP ---" << std::endl;
	return 0;
}
