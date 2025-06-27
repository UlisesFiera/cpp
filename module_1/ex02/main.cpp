/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:08:39 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/25 15:32:42 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		hi;
	std::string* 	stringPTR;
	std::string&	stringREF = hi;

	hi = "HI THIS IS BRAIN";
	stringPTR = &hi;
	std::cout << "String: " << &hi << "\n";
	std::cout << "Pointer: " << &stringPTR << "\n";
	std::cout << "Reference: " << &stringREF << "\n";
	std::cout << "String: " << hi << "\n";
	std::cout << "Pointer: " << *stringPTR << "\n";
	std::cout << "Reference: " << stringREF << "\n";
}
