//
// Created by zunon on 2/6/23.
//

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	value = 0x00000000 | 0x00;
}

Fixed::Fixed(const Fixed &number) {
	std::cout << "Copy constructor called" << std::endl;
	value = number.value;
}

Fixed	&Fixed::operator=(const Fixed &number) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &number)
		value = number.value;
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(const int newValue) {
	std::cout << "setRawBits member function called" << std::endl;
	value = newValue;
}