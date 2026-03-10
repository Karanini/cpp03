/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:24:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/02/12 10:36:06 by bkaras-g         ###   ########.fr       */
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

	std::cout << "\n--- Action tests ---" << std::endl;
	scav.attack("Trappy");
	trap.takeDamage(20);

	scav.guardGate();
	trap.beRepaired(10);

	std::cout << "\n--- Energy points exhaustion test ---" << std::endl;
    ScavTrap tired("TiredBot");
	for (int i = 0; i < 50; i++)
		tired.attack("target");
	tired.attack("target"); // Should fail (51st attack)
	tired.beRepaired(1);    // Should fail

	std::cout << "\n--- Hit points exhaustion test ---" << std::endl;
	trap.takeDamage(200);
	trap.attack("scavpy"); // Should fail if HP <= 0
	trap.beRepaired(5);    // Should fail

	std::cout << "\n--- Copy & Assignment tests ---" << std::endl;
	ScavTrap copy(scav);
	unnamed = trap;

	std::cout << "\n--- State of objects ---" << std::endl;
	std::cout << "scav    - Name: " << scav.getName() << ", HP: " << scav.getHitPoints() << ", EP: " << scav.getEnergyPoints() << ", AD: " << scav.getAttackDamage() << std::endl;
	std::cout << "copy    - Name: " << copy.getName() << ", HP: " << copy.getHitPoints() << ", EP: " << copy.getEnergyPoints() << ", AD: " << copy.getAttackDamage() << std::endl;
	std::cout << "trap    - Name: " << trap.getName() << ", HP: " << trap.getHitPoints() << ", EP: " << trap.getEnergyPoints() << ", AD: " << trap.getAttackDamage() << std::endl;
	std::cout << "unnamed - Name: " << unnamed.getName() << ", HP: " << unnamed.getHitPoints() << ", EP: " << unnamed.getEnergyPoints() << ", AD: " << unnamed.getAttackDamage() << std::endl;

    std::cout << "\n--- Destruction order test ---" << std::endl;
    {
        ScavTrap temp("StackBot");
    }

	std::cout << "\n--- Main Scope Destruction ---" << std::endl;
	return 0;
}
