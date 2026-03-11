/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:24:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/03/11 11:29:26 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "--- FragTrap Construction tests ---" << std::endl;
	FragTrap frag("Fraggy");
	FragTrap trap("Trappy");
	FragTrap unnamed;

	std::cout << "frag    - Name: " << frag.getName() << ", HP: " << frag.getHitPoints() << ", EP: " << frag.getEnergyPoints() << ", AD: " << frag.getAttackDamage() << std::endl;
	std::cout << "unnamed - Name: " << unnamed.getName() << ", HP: " << unnamed.getHitPoints() << ", EP: " << unnamed.getEnergyPoints() << ", AD: " << unnamed.getAttackDamage() << std::endl;
	std::cout << "trap    - Name: " << trap.getName() << ", HP: " << trap.getHitPoints() << ", EP: " << trap.getEnergyPoints() << ", AD: " << trap.getAttackDamage() << std::endl;

	std::cout << "\n--- Action tests ---" << std::endl;
	frag.attack("Trappy");
	trap.takeDamage(30);

	frag.highFivesGuys();
	trap.beRepaired(20);

	std::cout << "\n--- Energy points exhaustion test ---" << std::endl;
    FragTrap tired("TiredFrag");
	for (int i = 0; i < 100; i++)
		tired.attack("target");
	tired.attack("target"); // Should fail (101st attack)
	tired.beRepaired(1);    // Should fail

	std::cout << "\n--- Hit points exhaustion test ---" << std::endl;
	trap.takeDamage(100);
	trap.attack("fraggy"); // Should fail if HP <= 0
	trap.beRepaired(5);    // Should fail

	std::cout << "\n--- Copy & Assignment tests ---" << std::endl;
	FragTrap copy(frag);
	FragTrap assigned;
    assigned = trap;

	std::cout << "\n--- State of objects ---" << std::endl;
	std::cout << "frag     - Name: " << frag.getName() << ", HP: " << frag.getHitPoints() << ", EP: " << frag.getEnergyPoints() << ", AD: " << frag.getAttackDamage() << std::endl;
	std::cout << "copy     - Name: " << copy.getName() << ", HP: " << copy.getHitPoints() << ", EP: " << copy.getEnergyPoints() << ", AD: " << copy.getAttackDamage() << std::endl;
	std::cout << "trap     - Name: " << trap.getName() << ", HP: " << trap.getHitPoints() << ", EP: " << trap.getEnergyPoints() << ", AD: " << trap.getAttackDamage() << std::endl;
	std::cout << "assigned - Name: " << assigned.getName() << ", HP: " << assigned.getHitPoints() << ", EP: " << assigned.getEnergyPoints() << ", AD: " << assigned.getAttackDamage() << std::endl;

    std::cout << "\n--- Destruction order test ---" << std::endl;
    {
        FragTrap temp("StackBot");
    }

	std::cout << "\n--- Main Scope Destruction ---" << std::endl;
	return 0;
}
