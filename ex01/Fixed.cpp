/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:20:31 by adidion           #+#    #+#             */
/*   Updated: 2022/01/11 13:52:16 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed	&Fixed::operator=(Fixed const &c)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(c.getRawBits());
	return (*this);
}

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const integer)
{
	setRawBits(integer << this->_bit);
	std::cout << "Int constructor called" << std::endl;
	return ;
}
Fixed::Fixed(float const f)
{
	setRawBits((int)roundf(f * (1 << this->_bit)));
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

float	Fixed::toFloat(void) const
{
	float f;
	f = (float)this->getRawBits() / (1 << this->_bit);
	return (f);
}

int	Fixed::toInt(void) const
{
	int i;
	i = _fixed >> this->_bit;
	return (i);
}

int Fixed::getRawBits(void) const
{
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &ope, Fixed const &fix)
{
	ope << fix.toFloat();
	return (ope);
}