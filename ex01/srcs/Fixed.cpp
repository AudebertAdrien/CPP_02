/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:50:55 by motoko            #+#    #+#             */
/*   Updated: 2024/01/23 16:19:09 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed( const int n ) {
    std::cout << "Int constructor called" << std::endl;
	_fixedPointValue =  n << _fractionalBits;
}

Fixed::Fixed( const float n ) {
    std::cout << "Float constructor called" << round(n) << std::endl;
	_fixedPointValue = round( n * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &rhs) {
    std::cout << "Copy constructor called" << std::endl;
     *this = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float   Fixed::toFloat(void) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int     Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream&	operator<<(std::ostream &o, Fixed const &i) {
    o << i.toFloat();
    return (o);
}
