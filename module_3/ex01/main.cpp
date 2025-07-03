/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:22:40 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/02 18:50:52 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	// Test constructor chaining
	ScavTrap bot("Serena");

	// Test attack override
	bot.attack("target dummy");

	// Test special ability
	bot.guardGate();

	// Test inherited functions
	bot.takeDamage(30);
	bot.beRepaired(20);
	bot.attack("another dummy");

	// Destructor will be tested on exit (check order of destruction messages)
	return 0;
}
