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

bool	Fixed::operator>(const Fixed& other) const
{
	if (this->fixed_value > other.fixed_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed& other) const
{
	if (this->fixed_value < other.fixed_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed& other) const
{
	if (this->fixed_value == other.fixed_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	if (this->fixed_value != other.fixed_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	if (this->fixed_value >= other.fixed_value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	if (this->fixed_value <= other.fixed_value)
		return (true);
	else
		return (false);
}
