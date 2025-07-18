/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:58 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 19:46:45 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& copyDog);
		Dog& operator=(const Dog& copyDog);
		~Dog();
		void			makeSound(void) const;
		std::string		getType(void) const;
		void			setIdeas(const std::string& idea, int index);
		std::string		getIdeas(int index);
	private:
		std::string type;
		Brain*		brain;
		int			brain_max_size;
};

#endif

