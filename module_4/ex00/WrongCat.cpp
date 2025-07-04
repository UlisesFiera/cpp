/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:20:36 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 12:22:42 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "wrong cat";
	std::cout << "A WRONG cat was created.\n";
}

WrongCat::~WrongCat()
{
	std::cout << "A WRONG cat has been destroyed.\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "This should sound like 'Meeeeew' but won't happen.\n";
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}
