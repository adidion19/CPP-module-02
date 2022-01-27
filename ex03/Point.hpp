/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:39:21 by adidion           #+#    #+#             */
/*   Updated: 2022/01/17 11:51:02 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	bool bsp( Point const a, Point const b, Point const c, Point const point);
	Fixed getX() const;
	Fixed getY() const;
	Point &operator=(Point &p);
	Point();
	Point(Point const &p);
	Point(Fixed const x, Fixed const y);
	~Point();
};

bool bsp2( Point const a, Point const b, Point const c, Point const point);

#endif
