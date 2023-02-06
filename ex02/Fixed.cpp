//
// Created by zunon on 2/6/23.
//

#include "Fixed.hpp"

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	value = 0x00000000 | 0x00;
}

Fixed::Fixed(const Fixed &number) {
	std::cout << "Copy constructor called" << std::endl;
	value = number.value;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	value = num << FRACTIONAL_BITS | 0x00;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	value = std::floor(num) * std::pow(2.0, 8);
	value = static_cast<int>(std::round((num - std::floor(num))
			* (1.0 / std::pow(2.0, -8))));

}

Fixed	&Fixed::operator++(int) {
	value++;
	return (*this);
}

Fixed	&Fixed::operator--(int) {
	value--;
	return (*this);
}

Fixed	Fixed::operator++(void) {
	Fixed tmp(*this);

	value++;
	return (tmp);
}

Fixed	Fixed::operator--(void) {
	Fixed tmp(*this);

	value--;
	return (tmp);
}

Fixed	&Fixed::operator=(const Fixed &number) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &number)
		value = number.value;
	return (*this);
}

bool	Fixed::operator<(const Fixed &other) const {
	return (getRawBits() < other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const {
	return (getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (getRawBits() != other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (getRawBits() >= other.getRawBits());
}

bool	Fixed::operator>(const Fixed &other) const {
	return (getRawBits() > other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const {
	return (Fixed(getRawBits() + other.getRawBits()));
}

Fixed	Fixed::operator-(const Fixed &other) const {
	return (Fixed(getRawBits() - other.getRawBits()));
}

Fixed	Fixed::operator*(const Fixed &other) const {
	return (Fixed(getRawBits() * other.getRawBits() >> 1));
}

Fixed	Fixed::operator/(const Fixed &other) const {
	return (Fixed(getRawBits() / other.getRawBits() << 1));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(const int newValue) {
	std::cout << "setRawBits member function called" << std::endl;
	value = newValue;
}

float	Fixed::toFloat(void) const {
	float result;

	result = value >> 8;
	result += (value & 0x000000ff) * std::pow(2.0, -8);
	return (result);
}

int	Fixed::toInt(void) const {
	return (value >> 8);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &num) {
	output << num.toFloat();
	return (output);
}

Fixed	&Fixed::min(Fixed &left, Fixed &right) {
	return ((left < right) ? left : right);
}

const Fixed	&Fixed::min(const Fixed &left, const Fixed &right) {
	return ((left < right) ? left : right);
}

Fixed	&Fixed::max(Fixed &left, Fixed &right) {
	return ((left > right) ? left : right);
}

const Fixed	&Fixed::max(const Fixed &left, const Fixed &right) {
	return ((left > right) ? left : right);
}