/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:47 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 14:35:34 by ulfernan         ###   ########.fr       */
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
		Animal::operator=(copyCat);
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

void	Cat::setIdeas(const std::string& idea)
{
	static int	i = 0;
	int			max_size;

	max_size = brain->getBrainSize();
	while (i < max_size)
	{
		brain->setIdea(i, idea);
		i++;
	}
}

std::string		getIdeas(void);