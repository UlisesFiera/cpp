/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:12:40 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/02 13:26:42 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed 
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copyFixed);
		~Fixed();
		Fixed&	operator=(const Fixed& copyFixed);
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed&		min(Fixed& n1, Fixed& n2);
		static const Fixed&	min(const Fixed& n1, const Fixed& n2);
		static Fixed&		max(Fixed& n1, Fixed& n2);
		static const Fixed&	max(const Fixed& n1, const Fixed& n2);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					fixed_value;
		static const int	fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
