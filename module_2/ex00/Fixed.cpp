/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:12:33 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/01 16:11:49 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	n_value = 0;
}

Fixed::Fixed(const Fixed& copyFixed)
{
	std::cout << "Copy constructor called\n";
	this->n_value = copyFixed.n_value;
}

Fixed& Fixed::operator=(const Fixed& copyFixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &copyFixed)
		this->n_value = copyFixed.n_value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (n_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	n_value = raw;
}
