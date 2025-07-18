/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:35:01 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 12:54:09 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "wrong animal";
	std::cout << "A WRONG animal was created.\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An WRONG animal has been destroyed.\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Weaughhwwrr. That's how a wrong animal sounds. If you call wrong cat, you'll hear this too.\n";
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
