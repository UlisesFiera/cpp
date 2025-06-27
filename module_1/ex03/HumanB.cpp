/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:00:00 by uliseszeta        #+#    #+#             */
/*   Updated: 2025/06/26 11:14:28 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string new_name)
{
	name = new_name;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	weapon = &new_weapon;
}

const std::string&	HumanB::getName(void) const
{
	return (name);
}

void	HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << weapon->getType() << "\n";
}
