/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:21:27 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 12:36:55 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->name = name;
	std::cout << "FragTrap entity " << name << " generated!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been destroyed first!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->hit_points == 0)
	{
		std::cout << "Can't attack; FragTrap " << this->name << " is dead.\n";
		return ;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "Can't attack; FragTrap " << this->name << " has no energy left.\n";
		return ;
	}
	this->energy_points--;
	if (this->energy_points == 0)
		std::cout << "FragTrap " << this->name << " has run out of energy!.\n";
	std::cout << "FragTrap " << this->name << " has hit " << target 
			  << ", dealing " << this->attack_damage << " damage points.\n"
			  << "Energy left: " << this->energy_points << ".\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}
