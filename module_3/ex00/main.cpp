/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:22:40 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/02 17:28:59 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap bot("Unit42");

	bot.attack("TargetDummy");
	bot.takeDamage(3);
	bot.beRepaired(5);
	bot.takeDamage(12);   // Should drop to 0 HP
	bot.attack("AnotherTarget"); // Should not work (no HP)

	return 0;
}