/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:10:01 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/26 18:12:35 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	void	(Harl::*funcPTR[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		level_to_nbr;

	level_to_nbr = std::atoi(level.c_str());
	(this->*funcPTR[level_to_nbr])();
}

void	Harl::debug(void)
{
	std::cout << "normal.human is being created; needs more <introversion> points; adding...\n";
}

void	Harl::info(void)
{
	std::cout << "If <introversion> score get too high normal.human might get stuck in an imposter's syndrome loop\n";
}

void	Harl::warning(void)
{
	std::cout << "<introversion> score reaching unsustainable limits; risk of never get a job and be stuck in school forever\n";
}

void	Harl::error(void)
{
	std::cout << "<introversion> overflow; normal.human now is -> 42.student; go fail your peers' projects!\n";
}
