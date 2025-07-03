/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:35:04 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 13:35:29 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal 
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copyWrongAnimal);
		WrongAnimal& operator=(const WrongAnimal& copyWrongAnimal);
		~WrongAnimal();
	private:
};

#endif

