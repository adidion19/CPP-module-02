/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:16:13 by adidion           #+#    #+#             */
/*   Updated: 2022/01/13 14:08:52 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	Fixed::operator=(Fixed &c)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed = c.getRawBits();
	return ;
}

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
