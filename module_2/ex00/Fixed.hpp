/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:12:40 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/01 13:41:10 by ulfernan         ###   ########.fr       */
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
		Fixed(const Fixed& copyFixed);
		Fixed& operator=(const Fixed& copyFixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					n_value;
		static const int	fractional_bits = 8;
};

#endif

