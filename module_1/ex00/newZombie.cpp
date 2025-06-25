/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 17:59:52 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 18:41:11 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie(std::string name)
{
	Zombie* new_zombie;

	new_zombie = new Zombie(name);
	return (new_zombie);
}
