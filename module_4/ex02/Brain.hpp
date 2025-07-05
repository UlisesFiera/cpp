/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:01:22 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/04 19:45:29 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain 
{
	public:
		Brain();
		Brain(const Brain& copyBrain);
		Brain& operator=(const Brain& copyBrain);
		~Brain();
		void		setIdea(int index, const std::string& idea);
		std::string	getIdea(int index);
		int			getBrainSize();
	protected:
		static const int	brain_size = 100;
		std::string 		ideas[brain_size];
};

#endif
