/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:52:50 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/01 19:52:50 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed	result;

	result.fixed_value = this->fixed_value + other.fixed_value;
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed	result;
	
	result.fixed_value = this->fixed_value - other.fixed_value;
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed		result;
	long long	fixed_multiplication;

	fixed_multiplication = this->fixed_value * other.fixed_value;
	result.fixed_value = (int)fixed_multiplication >> fractional_bits;
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed		result;

	result.fixed_value = (long long)(this->fixed_value << fractional_bits) / other.fixed_value;
	return (result);
}
