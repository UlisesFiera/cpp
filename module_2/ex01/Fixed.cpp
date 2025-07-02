/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:12:33 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/01 19:33:01 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fixed_value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	fixed_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	fixed_value = (value >= 0)
		? (int)(value * (1 << fractional_bits) + 0.5f)
		: (int)(value * (1 << fractional_bits) - 0.5f);
}

Fixed::Fixed(const Fixed& copyFixed)
{
	std::cout << "Copy constructor called\n";
	this->fixed_value = copyFixed.fixed_value;
}

Fixed& Fixed::operator=(const Fixed& copyFixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &copyFixed)
		this->fixed_value = copyFixed.fixed_value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	fixed_value = raw;
}

float	Fixed::toFloat(void) const
{
	float	float_value;
	
	float_value = (float)fixed_value / (1 << fractional_bits);
	return (float_value);
}

int	Fixed::toInt(void) const
{
	int	int_value;

	int_value = fixed_value >> fractional_bits;
	return (int_value);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
