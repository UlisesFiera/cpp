/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:47 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/05 12:37:42 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "cat";
	std::cout << "A cat was created.\n";
	this->brain = new Brain();
}

Cat& Cat::operator=(const Cat& copyCat)
{
	if (this != &copyCat)
	{
		AAnimal::operator=(copyCat);
		delete this->brain;
		this->brain = new Brain(*copyCat.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "A cat has been destroyed.\n";
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Mew! Mewwwww!\n";
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::setIdeas(const std::string& idea, int index)
{
	if (index > brain_max_size)
	{
		std::cout << "Index bigger than brain capacity.\n";
		return ;
	}
	brain->setIdea(index, idea);
}

std::string		Cat::getIdeas(int index)
{
	return (brain->getIdea(index));
}
