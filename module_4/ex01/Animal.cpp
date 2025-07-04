/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:37 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 20:14:58 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "animal";
	std::cout << "An animal was created.\n";
}

Animal& Animal::operator=(const Animal& copyAnimal)
{
	if (this != &copyAnimal)
		this->type = copyAnimal.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "An animal has been destroyed.\n";
}

void	Animal::makeSound() const
{
	std::cout << "Generic animal sound. No inheritance happening.\n";
}

std::string	Animal::getType() const
{
	return (this->type);
}
