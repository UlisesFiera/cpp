/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:47 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 12:20:10 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "cat";
	std::cout << "A cat was created.\n";
}

Cat::~Cat()
{
	std::cout << "A cat has been destroyed.\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Mew! Mewwwww!\n";
}

std::string	Cat::getType(void) const
{
	return (this->type);
}
