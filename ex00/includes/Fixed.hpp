/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:45:48 by motoko            #+#    #+#             */
/*   Updated: 2024/01/23 14:18:44 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int                 _fixedPointValue;
		static const int    _fractionalBits = 8;

	public:
		Fixed();	
		Fixed(const Fixed &rhs);
		Fixed& operator=(const Fixed &rhs);
		~Fixed();

		int     getRawBits(void) const;
		void    setRawBits(int const raw);
};

#endif
