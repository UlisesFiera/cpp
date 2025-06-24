/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:16:04 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 14:59:06 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include "ex01.h"

bool	PhoneBook::add(int index)
{
	std::string input;
	
	std::cout << "\nAdding contact in slot " << index + 1 << "...\n\n"
			  << "First name: ";
	std::getline(std::cin, input);
	if (!std::cin)
		return false;
	while (!contacts[index].setFirstName(input))
	{
		std::cout << "Invalid input size\n";
		std::cout << "First name: ";
		std::getline(std::cin, input);
		if (!std::cin)
			return false;
	}
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	if (!std::cin)
		return false;
	while (!contacts[index].setLastName(input))
	{
		std::cout << "Invalid input size\n";
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if (!std::cin)
			return false;
	}
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	if (!std::cin)
		return false;
	while (!contacts[index].setNickname(input))
	{
		std::cout << "Invalid input size\n";
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if (!std::cin)
			return false;
	}
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	if (!std::cin)
		return false;
	while (!contacts[index].setPhoneNumber(input))
	{
		std::cout << "Invalid phone_number\n";
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		if (!std::cin)
			return false;
	}
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	if (!std::cin)
		return false;
	if (!contacts[index].setDarkestSecret(input))
	{
		std::cout << "Invalid input size\n";
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		if (!std::cin)
			return false;
	}
	if (list_size < 8)
		list_size++;
	return true;
}

bool	PhoneBook::search(PhoneBook phonebook, int index)
{
	std::string	user_index;

	std::cout << "\n";
	if (phonebook.getListSize() == 0)
	{
		std::cout << "Your contact list is empty!\n";
		return true;
	}
	print_table(phonebook, index);
	std::cout << "To display contact info, please enter its index: ";
	std::getline(std::cin, user_index);
	if (!std::cin)
		return false;
	while (!is_only_digits(user_index))
	{
		std::cout << "Woops! Not a number. Try again: ";
		std::getline(std::cin, user_index);
	}
	while (std::stoi(user_index) < 1 || std::stoi(user_index) > list_size)
	{
		std::cout << "Hey! That contact doesn't exist! Try again: ";
		std::getline(std::cin, user_index);
	}
	std::cout << "\n";
	printf_contact_info(phonebook.contacts[std::stoi(user_index) - 1]);
	return true;
}

void	PhoneBook::exit()
{
	
}

std::string	PhoneBook::getFirstName(int index)
{
	return (contacts[index].getFirstName());
}

std::string	PhoneBook::getLastName(int index)
{
	return (contacts[index].getLastName());
}
std::string	PhoneBook::getNickname(int index)
{
	return (contacts[index].getNickname());
}

void	PhoneBook::initListSize()
{
	list_size = 0;
}

int	PhoneBook::getListSize()
{
	return (list_size);
}