/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:42 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/05 12:25:38 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal 
{
	public:
		AAnimal();
		AAnimal(const AAnimal& copyAAnimal);
		AAnimal& operator=(const AAnimal& copyAAnimal);
		virtual ~AAnimal();
		virtual void			makeSound() const = 0;
		virtual std::string		getType() const;
	protected:
		std::string type;
};

#endif
