/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 09:48:44 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 14:45:57 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
	public:
		bool		setFirstName(const std::string& input);
		bool		setLastName(const std::string& input);
		bool		setNickname(const std::string& input);
		bool		setDarkestSecret(const std::string& input);
		bool		setPhoneNumber(const std::string& input);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
};

#endif