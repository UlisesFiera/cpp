/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:00:00 by uliseszeta        #+#    #+#             */
/*   Updated: 2025/06/26 11:05:39 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string new_name, Weapon& new_weapon)
	: weapon(new_weapon)
{
	name = new_name;
}

const std::string&	HumanA::getName(void) const
{
	return (name);
}

void	HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << weapon.getType() << "\n";
}
