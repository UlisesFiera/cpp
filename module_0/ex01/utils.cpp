/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:24:47 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 14:52:56 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

bool	is_only_digits(const std::string& input)
{
	size_t	i;

	i = 0;
	while (i < input.size())
	{
		if (input[i] < '0' || input[i] > '9')
			return false;
		i++;
	}
	return true;
}

std::string	replace_out_of_bounds(const std::string& str)
{
	std::string	new_str;
	
	new_str = str;
	new_str[9] = '.';
	new_str.erase(10);
	return (new_str);
}

void	print_table(PhoneBook phonebook, int index)
{
	std::string	replacement;
	int	i;
	(void)index;
	std::cout << "\n"
			  << std::setw(10) << "INDEX" << "|"
			  << std::setw(10) << "FIRST NAME" << "|"
			  << std::setw(10) << "LAST NAME" << "|"
			  << std::setw(10) << "NICKNAME" << "|\n";
	i = 0;
	while (i < phonebook.getListSize())
	{
		std::cout << std::setw(10) << i + 1 << "|";
		if (phonebook.getFirstName(i).size() > 10)
		{
			replacement = replace_out_of_bounds(phonebook.getFirstName(i));
			std::cout << std::setw(10) << replacement << "|";
		}
		else
			std::cout << std::setw(10) << phonebook.getFirstName(i) << "|";
		if (phonebook.getLastName(i).size() > 10)
		{
			replacement = replace_out_of_bounds(phonebook.getLastName(i));
			std::cout << std::setw(10) << replacement << "|";
		}
		else
			std::cout << std::setw(10) << phonebook.getLastName(i) << "|";
		if (phonebook.getNickname(i).size() > 10)
		{
			replacement = replace_out_of_bounds(phonebook.getNickname(i));
			std::cout << std::setw(10) << replacement << "|\n";
		}
		else
			std::cout << std::setw(10) << phonebook.getNickname(i) << "|\n";
		i++;
	}
	std::cout << "\n";
}

void	printf_contact_info(Contact contact)
{
	std::cout << "First name: " << contact.getFirstName() << "\n";
	std::cout << "Last name: " << contact.getLastName() << "\n";
	std::cout << "Nickname: " << contact.getNickname() << "\n";
	std::cout << "Phone number: " << contact.getPhoneNumber() << "\n";
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << "\n";
}