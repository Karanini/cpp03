/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaras-g <bkaras-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:24:23 by bkaras-g          #+#    #+#             */
/*   Updated: 2026/03/11 12:01:26 by bkaras-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--- DIAMONDTRAP CONSTRUCTION TESTS ---" << std::endl;
	{
		DiamondTrap dt("Shiny");
		DiamondTrap unnamed;
		DiamondTrap copy(dt);
		DiamondTrap assigned;
		assigned = dt;

		std::cout << "\n--- IDENTITY TEST (whoAmI) ---" << std::endl;
		dt.whoAmI();
		unnamed.whoAmI();

		std::cout << "\n--- ATTRIBUTES VERIFICATION ---" << std::endl;
		// HP: 100 (Frag), EP: 50 (Scav), AD: 30 (Frag)
		std::cout << "Name: " << dt.getName() << std::endl;
		std::cout << "HP:   " << dt.getHitPoints() << " (Expected: 100)" << std::endl;
		std::cout << "EP:   " << dt.getEnergyPoints() << " (Expected: 50)" << std::endl;
		std::cout << "AD:   " << dt.getAttackDamage() << " (Expected: 30)" << std::endl;

		std::cout << "\n--- ACTION TESTS ---" << std::endl;
		dt.attack("a target"); // Should use ScavTrap::attack
		dt.guardGate();       // From ScavTrap
		dt.highFivesGuys();   // From FragTrap

		std::cout << "\n--- DAMAGE AND REPAIR TESTS ---" << std::endl;
		dt.takeDamage(50);
		dt.beRepaired(20);
		std::cout << "Current HP: " << dt.getHitPoints() << " (Expected: 70)" << std::endl;

		std::cout << "\n--- DESTRUCTION ORDER TEST ---" << std::endl;
	}

	std::cout << "\n--- EDGE CASE: ENERGY EXHAUSTION ---" << std::endl;
	{
		DiamondTrap tired("TiredDiamond");
		std::cout << "Initial EP: " << tired.getEnergyPoints() << std::endl;
		for (int i = 0; i < 50; i++)
			tired.attack("rock");
		tired.attack("rock"); // Should fail
		tired.beRepaired(10); // Should fail
	}

	std::cout << "\n--- EDGE CASE: DEATH ---" << std::endl;
	{
		DiamondTrap dead("DeadDiamond");
		dead.takeDamage(100);
		dead.attack("nothing"); // Should fail
		dead.beRepaired(10);    // Should fail
		dead.whoAmI();          // Should still work but state is dead
	}

	return 0;
}
