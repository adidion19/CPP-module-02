/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:37:43 by adidion           #+#    #+#             */
/*   Updated: 2022/01/17 11:50:34 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	vector_prod(Point const a, Point const b)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat();
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	return ((ax * by) - (ay * bx));
}

static Point	*create_vector(Point const a, Point const b)
{
	Point *vec = new Point(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	return (vec);
}

bool bsp2( Point const a, Point const b, Point const c, Point const point)
{
	Point *ab = create_vector(a, b);
	Point *bc = create_vector(b, c);
	Point *ca = create_vector(c, a);
	Point *ap = create_vector(a, point);
	Point *bp = create_vector(b, point);
	Point *cp = create_vector(c, point);
	float res1 = vector_prod(*ab, *ap);
	float res2 = vector_prod(*bc, *bp);
	float res3 = vector_prod(*ca, *cp);
	delete(ab);
	delete(bc);
	delete(ca);
	delete(ap);
	delete(bp);
	delete(cp);
	return ((res1 > 0 && res2 > 0 && res3 > 0) || (res1 < 0 && res2 < 0 && res3 < 0));
}