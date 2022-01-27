/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:54:40 by adidion           #+#    #+#             */
/*   Updated: 2022/01/17 11:38:14 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void test1()
{
	Point p(15, 15);
	Point a(0, 0), b(0, 50), c(50, 0);
	std::cout << "Test 1: should be inside" << std::endl;
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void test2()
{
	Point p(2.3f, 2.3f);
	Point a(2.3f, 2.3f), b(50.6f, 50), c(32.f, 5.3f);
	std::cout << "Test 2: should be on a border (considered outside then)" << std::endl;
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void test3()
{
	Point p(-6, 0.42f);
	Point a(2.3f, 2.3f), b(50.6f, 50), c(32.f, 5.3f);
	std::cout << "Test 3: should be outside" << std::endl;
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

void test4()
{
	Point p(10.6f, 4.8f);
	Point a(2.3f, 2.3f), b(50.6f, 50), c(32.f, 5.3f);
	std::cout << "Test 4: an other point that should be inside" << std::endl;
	std::cout << p.bsp(a, b, c, p) << std::endl;
}

int main()
{
	test1();
	test2();
	test3();
	test4();
}