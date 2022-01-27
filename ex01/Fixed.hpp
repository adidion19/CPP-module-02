/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:20:17 by adidion           #+#    #+#             */
/*   Updated: 2022/01/11 13:42:33 by adidion          ###   ########.fr       */
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
	Fixed &operator=(Fixed const &c);
	int	toInt(void) const;
	float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &ope, Fixed const &fix);

#endif