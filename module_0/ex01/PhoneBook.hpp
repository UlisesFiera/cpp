/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:58:35 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 14:28:34 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <string>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		list_size;
	public:
		bool		add(int index);
		bool		search(PhoneBook phonebook, int index);
		void		exit();
		void		initListSize();
		int			getListSize();
		std::string	getFirstName(int index);
		std::string	getLastName(int index);
		std::string	getNickname(int index);
};

#endif