/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:42 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 14:17:21 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal 
{
	public:
		Animal();
		Animal(const Animal& copyAnimal);
		Animal& operator=(const Animal& copyAnimal);
		virtual ~Animal();
		virtual void			makeSound() const;
		virtual std::string		getType() const;
	protected:
		std::string type;
};

#endif
