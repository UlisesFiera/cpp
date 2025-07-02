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

Fixed&	Fixed::operator++()
{
	this->fixed_value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->fixed_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result;

	result.fixed_value = this->fixed_value;
	this->fixed_value++;
	return (result);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result;

	result.fixed_value = this->fixed_value;
	this->fixed_value--;
	return (result);
}
