/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:16:04 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 17:43:16 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

bool	Contact::setFirstName(const std::string& input)
{
	if (input.size() <= 0)
		return false;
	if (input.size() > 30)
		return false;
	first_name = input;
	return true;
}

bool	Contact::setLastName(const std::string& input)
{
	if (input.size() <= 0)
		return false;
	if (input.size() > 30)
		return false;
	last_name = input;
	return true;
}

bool	Contact::setNickname(const std::string& input)
{
	if (input.size() <= 0)
		return false;
	if (input.size() > 30)
		return false;
	nickname = input;
	return true;
}

bool	Contact::setDarkestSecret(const std::string& input)
{
	if (input.size() > 300)
		return false;
	darkest_secret = input;
	return true;
}

bool	Contact::setPhoneNumber(const std::string& input)
{
	if (!is_only_digits(input))
		return false;
	if (input.size() <= 0)
		return false;
	phone_number = input;
	return true;
}

std::string	Contact::getFirstName()
{
	return (first_name);
}

std::string	Contact::getLastName()
{
	return (last_name);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (phone_number);
}

std::string	Contact::getDarkestSecret()
{
	return (darkest_secret);
}
