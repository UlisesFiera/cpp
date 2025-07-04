/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:01:19 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 20:12:02 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain has been created.\n";
}

Brain::Brain(const Brain& copyBrain)
{
	int	i;

	i = 0;
	while (i < brain_size)
	{
		this->ideas[i] = copyBrain.ideas[i];
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "A brain has been deleted.\n";
}

int	Brain::getBrainSize()
{
	return (this->brain_size);
}

void	Brain::setIdea(int index, const std::string& idea)
{
	this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	if (index > brain_size)
	{
		std::cout << "Index bigger than brain capacity.\n";
		return ("Idea out of limits\n");
	}
	return (ideas[index]);
}