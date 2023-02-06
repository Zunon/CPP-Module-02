//
// Created by zunon on 2/6/23.
//
#include "Fixed.hpp"

int main(void) {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	exit(EXIT_SUCCESS);
}