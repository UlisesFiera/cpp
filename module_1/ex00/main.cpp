/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:16:17 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 18:30:56 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie* heapZombie;

	heapZombie = newZombie("Alfredo");
	heapZombie->announce();
	delete (heapZombie);
	randomChump("Martita");
}
