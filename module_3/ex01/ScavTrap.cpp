/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:21:27 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 11:22:19 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap has been baptized as " << name << "too!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been destroyed too!" << std::endl;
}

ScavTrap::attack

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate-keeper mode!" << std::endl;
}
