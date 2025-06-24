/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:07:34 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 15:10:05 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

int	main(void)
{
	PhoneBook	phonebook;
	std::string input;
	int			i;

	phonebook.initListSize();
	std::cout << "\nWelcome to Very Usefull Contact List! The hottest trend in social media utilities.\n";
	std::cout << "\nWhat would you like to do today?\n"
				<< "\nADD | SEARCH | EXIT\n\n"
				<< "> ";
	i = 0;
	while (std::getline(std::cin, input))
	{
		if (input == "ADD" || input == "add")
		{
			if (i == 8)
				i = 0;
			if (!phonebook.add(i))
				break ;
			std::cout << "\n" << phonebook.getFirstName(i) << " added!\n";
			i++;
			std::cout << "\nWhat else would you like to do?\n\n"
				  	  << "ADD | SEARCH | EXIT\n\n"
					  << "> ";
		}
		else if (input == "SEARCH" || input == "search")
		{
			if (!phonebook.search(phonebook, i))
				break ;
			std::cout << "\nWhat else would you like to do?\n\n"
				 	  << "ADD | SEARCH | EXIT\n\n"
					  << "> ";
		}
		else if (input == "EXIT" || input == "exit")
		{
			phonebook.exit();
			break ;
		}
		else 
		{
			std::cout << "\nPlease, enter one of the following:\n\n"
					  << "ADD | SEARCH | EXIT\n\n"
					  << "> ";
		}
	}
	std::cout << "\n";
}
