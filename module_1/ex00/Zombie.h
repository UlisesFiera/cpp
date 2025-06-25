/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:08:39 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 17:47:32 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include "Zombie.hpp"

# include <iostream>
# include <string>

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif
