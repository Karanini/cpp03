/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:24:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/10 16:31:12 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "--- Construction tests ---" << std::endl;
	ClapTrap clap("Clappy");
	ClapTrap trap("Trappy");
	ClapTrap unnamed("");

	// std::cout << "\n--- Action tests ---" << std::endl;
	// clap.attack("Trappy");
	// trap.takeDamage(0);

	// clap.attack("Trappy");
	// trap.takeDamage(5);

	// trap.beRepaired(3);
	// trap.beRepaired(10);

	// std::cout << "\n--- Energy points exhaustion test ---" << std::endl;
	// for (int i = 0; i < 10; i++)
	// 	clap.attack("target");
	// clap.attack("target"); // Should fail if energy is 10 and each attack costs 1
	// clap.beRepaired(1);    // Should fail

	// std::cout << "\n--- Hit points exhaustion test ---" << std::endl;
	// trap.takeDamage(20);
	// trap.attack("Clappy"); // Should fail if HP <= 0
	// trap.beRepaired(5);    // Should fail

	std::cout << "\n--- Copy & Assignment tests ---" << std::endl;
	ClapTrap copy(clap);
	unnamed = trap;

	std::cout << "\n--- State of objects ---" << std::endl;
	std::cout << "clap    - Name: " << clap.getName() << ", HP: " << clap.getHitPoints() << ", EP: " << clap.getEnergyPoints() << ", AD: " << clap.getAttackDamage() << std::endl;
	std::cout << "copy    - Name: " << copy.getName() << ", HP: " << copy.getHitPoints() << ", EP: " << copy.getEnergyPoints() << ", AD: " << copy.getAttackDamage() << std::endl;
	std::cout << "trap    - Name: " << trap.getName() << ", HP: " << trap.getHitPoints() << ", EP: " << trap.getEnergyPoints() << ", AD: " << trap.getAttackDamage() << std::endl;
	std::cout << "unnamed - Name: " << unnamed.getName() << ", HP: " << unnamed.getHitPoints() << ", EP: " << unnamed.getEnergyPoints() << ", AD: " << unnamed.getAttackDamage() << std::endl;

	std::cout << "\n--- Destruction ---" << std::endl;
	return 0;
}
