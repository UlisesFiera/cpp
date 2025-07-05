/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:37 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/05 12:25:11 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "animal";
	std::cout << "An animal was created.\n";
}

AAnimal& AAnimal::operator=(const AAnimal& copyAnimal)
{
	if (this != &copyAnimal)
		this->type = copyAnimal.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "An animal has been destroyed.\n";
}

void	AAnimal::makeSound() const
{
	std::cout << "Generic animal sound. No inheritance happening.\n";
}

std::string	AAnimal::getType() const
{
	return (this->type);
}
