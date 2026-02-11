/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:24:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/11 15:12:59 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- Construction tests ---" << std::endl;
	ScavTrap scav("Scavvy");
	ScavTrap trap("Trappy");
	ScavTrap unnamed("");

	std::cout << "scav    - Name: " << scav.getName() << ", HP: " << scav.getHitPoints() << ", EP: " << scav.getEnergyPoints() << ", AD: " << scav.getAttackDamage() << std::endl;
	std::cout << "unnamed    - Name: " << unnamed.getName() << ", HP: " << unnamed.getHitPoints() << ", EP: " << unnamed.getEnergyPoints() << ", AD: " << unnamed.getAttackDamage() << std::endl;
	std::cout << "trap    - Name: " << trap.getName() << ", HP: " << trap.getHitPoints() << ", EP: " << trap.getEnergyPoints() << ", AD: " << trap.getAttackDamage() << std::endl;

	// std::cout << "\n--- Action tests ---" << std::endl;
	// scav.attack("Trappy");
	// trap.takeDamage(0);

	// scav.attack("Trappy");
	// trap.takeDamage(5);

	// trap.beRepaired(3);
	// trap.beRepaired(10);

	// std::cout << "\n--- Energy points exhaustion test ---" << std::endl;
	// for (int i = 0; i < 8; i++)
	// 	scav.attack("target");
	// scav.attack("target"); // Should fail if energy is 10 and each attack costs 1
	// scav.beRepaired(1);    // Should fail

	// std::cout << "\n--- Hit points exhaustion test ---" << std::endl;
	// trap.takeDamage(20);
	// trap.attack("scavpy"); // Should fail if HP <= 0
	// trap.beRepaired(5);    // Should fail

	// std::cout << "\n--- Copy & Assignment tests ---" << std::endl;
	// ScavTrap copy(scav);
	// unnamed = trap;

	// std::cout << "\n--- State of objects ---" << std::endl;
	// std::cout << "scav    - Name: " << scav.getName() << ", HP: " << scav.getHitPoints() << ", EP: " << scav.getEnergyPoints() << ", AD: " << scav.getAttackDamage() << std::endl;
	// std::cout << "copy    - Name: " << copy.getName() << ", HP: " << copy.getHitPoints() << ", EP: " << copy.getEnergyPoints() << ", AD: " << copy.getAttackDamage() << std::endl;
	// std::cout << "trap    - Name: " << trap.getName() << ", HP: " << trap.getHitPoints() << ", EP: " << trap.getEnergyPoints() << ", AD: " << trap.getAttackDamage() << std::endl;
	// std::cout << "unnamed - Name: " << unnamed.getName() << ", HP: " << unnamed.getHitPoints() << ", EP: " << unnamed.getEnergyPoints() << ", AD: " << unnamed.getAttackDamage() << std::endl;

	// std::cout << "\n--- Destruction ---" << std::endl;
	// return 0;
}
