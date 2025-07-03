/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:21:27 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 12:37:02 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->name = name;
	std::cout << "ScavTrap robot " << name << " generated!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has been destroyed first!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_points == 0)
	{
		std::cout << "Can't attack; Scavtrap " << this->name << " is dead.\n";
		return ;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "Can't attack; Scavtrap " << this->name << " has no energy left.\n";
		return ;
	}
	this->energy_points--;
	if (this->energy_points == 0)
		std::cout << "Scavtrap " << this->name << " has run out of energy!.\n";
	std::cout << "Scavtrap " << this->name << " has hit " << target 
			  << ", dealing " << this->attack_damage << " damage points.\n"
			  << "Energy left: " << this->energy_points << ".\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}
