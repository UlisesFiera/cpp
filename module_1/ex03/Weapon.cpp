/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:00:00 by uliseszeta        #+#    #+#             */
/*   Updated: 2025/06/25 19:07:22 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	setType(weapon_type);
}

const std::string&	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}
