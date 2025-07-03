/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:37 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 14:15:21 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "An animal was created.\n";
}

Animal::~Animal()
{
	std::cout << "An animal has been destroyed.\n";
}

void	Animal::makeSound() const
{
	std::cout << "Generic animal sound\n";
}

std::string	Animal::getType() const
{
	return (this->type);
}
