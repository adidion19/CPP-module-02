/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:31:15 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 12:00:50 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
Fixed a;
Fixed const b(Fixed(5.05f) * Fixed(2));
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << Fixed::max(a, b) << std::endl;
std::cout << Fixed::min(a, b) << std::endl;
std::cout << "a + b = " << a + b << std::endl
<< "a - b = " << a - b << std::endl
<< "a / b = " << a / b << std::endl
<< "a * b = " << a * b << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
if (a > b)
	std::cout << "a > b" << std::endl;
if (a <= b)
	std::cout << "a <= b" << std::endl;
if (a != b)
	std::cout << "a != b" << std::endl;
return 0;
}