/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:22:58 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/02 18:22:59 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap 
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& copyClapTrap);
		ClapTrap& operator=(const ClapTrap& copyClapTrap);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string	name;
		int	hit_points;
		int	energy_points;
		int	attack_damage;
};

#endif

