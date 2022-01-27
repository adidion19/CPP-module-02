/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:10:02 by adidion           #+#    #+#             */
/*   Updated: 2022/01/11 11:16:09 by adidion          ###   ########.fr       */
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
	Fixed(Fixed &fix);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	void operator=(Fixed &c);
};


#endif
