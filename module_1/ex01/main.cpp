/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:09:12 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/25 13:36:43 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie* horde;
	int		size;
	int		i;

	size = 10;
	horde = zombieHorde(size, "Rasputia");
	i = 0;
	while (i < size)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
}
