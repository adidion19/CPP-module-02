/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:39:04 by adidion           #+#    #+#             */
/*   Updated: 2022/01/17 11:50:55 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	return ;
}

Point::Point(Point const &p): _x(p.getX()), _y(p.getY())
{
	return ;
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y)
{
	return ;
}

Point::~Point()
{
	return ;
}

Fixed Point::getX() const
{
	return (_x);
}

Fixed Point::getY() const
{
	return (_y);
}

bool Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	return (bsp2(a, b, c, point));
}