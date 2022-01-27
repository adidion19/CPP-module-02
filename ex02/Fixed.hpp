/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:26:09 by adidion           #+#    #+#             */
/*   Updated: 2022/01/11 17:10:36 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _fixed;
	const static int _bit = 8;
public:
	Fixed();
	Fixed(const Fixed &fix);
	Fixed(int integer);
	Fixed(float f);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	int	toInt(void) const;
	float toFloat(void) const;
	static Fixed min(Fixed a, Fixed b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed max(Fixed a, Fixed b);
	static Fixed &max(Fixed &a, Fixed &b);
	Fixed &operator=(Fixed const &c);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	Fixed	operator *(Fixed const & a);
	Fixed	operator +(Fixed const & a);
	Fixed	operator -(Fixed const & a);
	Fixed	operator /(Fixed const & a);
	bool	operator <(Fixed const & a);
	bool	operator >(Fixed const & a);
	bool	operator >=(Fixed const & a);
	bool	operator <=(Fixed const & a);
	bool	operator ==(Fixed const & a);
	bool	operator !=(Fixed const & a);
};

std::ostream &operator<<(std::ostream &ope, Fixed const &fix);

#endif