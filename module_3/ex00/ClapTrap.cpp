/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:22:45 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/02 18:22:46 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "ClapTrap has been baptized as " << name << "." << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points == 0)
	{
		std::cout << "Can't attack; ClapTrap " << this->name << " is dead.\n";
		return ;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "Can't attack; ClapTrap " << this->name << " has no energy left.\n";
		return ;
	}
	this->energy_points--;
	if (energy_points == 0)
		std::cout << "ClapTrap " << this->name << " has run out of energy!.\n";
	std::cout << "ClapTrap " << this->name << " has hit " << target 
			  << ", dealing " << this->attack_damage << " damage points.\n"
			  << "Energy left: " << this->energy_points << ".\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " has been hit by " 
			  << amount << " damage points.\n"
			  << "Hit points left: " << this->hit_points << ".\n";
	if (hit_points== 0)
		std::cout << "ClapTrap " << this->name << " has died!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == 0)
	{
		std::cout << "Can't repair; ClapTrap " << this->name << " is dead.\n";
		return ;
	}
	else if (this->energy_points == 0)
	{
		std::cout << "Can't repair; ClapTrap " << this->name << " has no energy left.\n";
		return ;
	}
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " has repaired itself by " 
			  << amount << " hit points.\n" 
			  << "Hit points left: " << this->hit_points << ".\n"
			  << "Energy left: " << this->energy_points << ".\n";
}
