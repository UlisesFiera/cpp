/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:34:52 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 20:23:34 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copyCat);
		Cat& operator=(const Cat& copyCat);
		~Cat();
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
