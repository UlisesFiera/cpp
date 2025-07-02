/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:15:01 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/01 14:15:01 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a(5.05f);
	Fixed b(2);
	Fixed c(a);     // Copy constructor
	Fixed d;

	std::cout << "Arithmetic:" << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;

	std::cout << "\nComparison:" << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "\nIncrement / Decrement:" << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "++d: " << ++d << std::endl;
	std::cout << "d++: " << d++ << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "--d: " << --d << std::endl;
	std::cout << "d--: " << d-- << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "\nMin / Max:" << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

	const Fixed e(3.3f), f(6.6f);
	std::cout << "min(const): " << Fixed::min(e, f) << std::endl;
	std::cout << "max(const): " << Fixed::max(e, f) << std::endl;

	return 0;
}

