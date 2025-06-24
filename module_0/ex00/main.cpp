/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:07:29 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/23 16:48:38 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string> 

int	main(int argc, char **argv)
{
	std::string input;
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (argv[i])
	{
		input = argv[i];
		j = 0;
		while (input[j])
		{
			input[j] = std::toupper(input[j]);
			j++;
		}
		std::cout << input << ' ';
		i++;
	}
	std::cout << '\n';
}
