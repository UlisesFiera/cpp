/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:01:19 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 14:23:26 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain has been created.\n";
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
