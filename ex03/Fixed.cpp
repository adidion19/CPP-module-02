/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:35:45 by adidion           #+#    #+#             */
/*   Updated: 2022/01/14 11:05:50 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed	&Fixed::operator=(Fixed const &c)
{
	setRawBits(c.getRawBits());
	return (*this);
}

Fixed::Fixed()
{
	setRawBits(0);
	return ;
}

Fixed::Fixed(int const integer)
{
	setRawBits(integer << this->_bit);
	return ;
}
Fixed::Fixed(float const f)
{
	setRawBits((int)roundf(f * (1 << this->_bit)));
	return ;
}

Fixed::Fixed(Fixed const &fix)
{
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
	return ;
}

std::ostream &operator<<(std::ostream &ope, Fixed const &fix)
{
	ope << fix.toFloat();
	return (ope);
}

Fixed &Fixed::operator++()
{
	_fixed++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	_fixed--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & c)
{
	Fixed a(this->toFloat() * c.toFloat());
	return (a);
}

Fixed	Fixed::operator-(Fixed const & c)
{
	Fixed a(this->toFloat() - c.toFloat());
	return (a);
}

Fixed	Fixed::operator+(Fixed const & c)
{
	Fixed a(this->toFloat() + c.toFloat());
	return (a);
}

Fixed	Fixed::operator/(Fixed const & c)
{
	Fixed a(this->toFloat() / c.toFloat());
	return (a);
}

bool	Fixed::operator <(Fixed const & a)
{
	if (this->toFloat() < a.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator >(Fixed const & a)
{
	if (this->toFloat() > a.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator <=(Fixed const & a)
{
	if (this->toFloat() <= a.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator >=(Fixed const & a)
{
	if (this->toFloat() >= a.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator ==(Fixed const & a)
{
	if (this->toFloat() == a.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator !=(Fixed const & a)
{
	if (this->toFloat() != a.toFloat())
		return (1);
	return (0);
}

Fixed Fixed::min(Fixed a, Fixed b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed a, Fixed b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}