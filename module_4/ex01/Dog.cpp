/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:56 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 19:47:38 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "dog";
	std::cout << "A dog was created.\n";
	this->brain = new Brain();
	this->brain_max_size = brain->getBrainSize();
}

Dog& Dog::operator=(const Dog& copyDog)
{
	if (this != &copyDog)
	{
		Animal::operator=(copyDog);
		delete this->brain;
		this->brain = new Brain(*copyDog.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "A dog has been destroyed.\n";
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark! Bark!\n";
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::setIdeas(const std::string& idea, int index)
{
	if (index > brain_max_size)
	{
		std::cout << "Index bigger than brain capacity.\n";
		return ;
	}
	brain->setIdea(index, idea);
}

std::string		Dog::getIdeas(int index)
{
	return (brain->getIdea(index));
}
