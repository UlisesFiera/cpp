/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:56 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 14:14:09 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A dog was created.\n";
}

Dog::~Dog()
{
	std::cout << "A dog has been destroyed.\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark! Bark!\n";
}

std::string	Dog::getType(void) const
{
	return (this->type);
}
