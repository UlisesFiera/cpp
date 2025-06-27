/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 00:00:00 by uliseszeta        #+#    #+#             */
/*   Updated: 2025/06/26 10:56:52 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&				weapon;
		std::string			name;
	public:
		HumanA(std::string new_name, Weapon& new_weapon);
		void				attack(void);
		const std::string&	getName(void) const;
};

#endif
