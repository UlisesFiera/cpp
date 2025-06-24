/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:08:39 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/24 14:43:40 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_H
# define EX01_H

# include "PhoneBook.hpp"

# include <iostream>
# include <string>
# include <iomanip>

bool	is_only_digits(const std::string& input);
void	print_table(PhoneBook phonebook, int index);
void	printf_contact_info(Contact contact);

#endif
