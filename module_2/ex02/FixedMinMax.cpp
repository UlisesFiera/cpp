/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedMinMax.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:12:12 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/02 13:12:12 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

const Fixed&	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

const Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}
