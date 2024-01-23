/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:45:48 by motoko            #+#    #+#             */
/*   Updated: 2024/01/23 15:22:41 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int                 _fixedPointValue;
		static const int    _fractionalBits = 8;

	public:
		Fixed();	
		Fixed( const int n );
		Fixed( const float n );
		Fixed(const Fixed &rhs);
		Fixed& operator=(const Fixed &rhs);
		~Fixed();

		int     getRawBits(void) const;
		void    setRawBits(int const raw);

		float   toFloat(void) const;
		int     toInt(void) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
