//
// Created by zunon on 2/6/23.
//

#ifndef CPP_MODULE_02_FIXED_HPP
#define CPP_MODULE_02_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	int					value;
	static const int	FRACTIONAL_BITS = 8;
public:
	static const Fixed	&min (const Fixed &, const Fixed &);
	static Fixed	&min (Fixed &, Fixed &);
	static const Fixed	&max (const Fixed &, const Fixed &);
	static Fixed	&max (Fixed &, Fixed &);
	Fixed (void);
	Fixed (const Fixed &);
	Fixed (const int);
	Fixed (const float);
	Fixed			&operator++ (void);
	Fixed			&operator-- (void);
	Fixed			operator++ (int);
	Fixed			operator-- (int);
	Fixed			&operator= (const Fixed &);
	bool			operator< (const Fixed &) const;
	bool			operator<= (const Fixed &) const;
	bool			operator== (const Fixed &) const;
	bool			operator!= (const Fixed &) const;
	bool			operator>= (const Fixed &) const;
	bool			operator> (const Fixed &) const;
	Fixed			operator+ (const Fixed &) const;
	Fixed			operator- (const Fixed &) const;
	Fixed			operator* (const Fixed &) const;
	Fixed			operator/ (const Fixed &) const;
	~Fixed (void);
	int				getRawBits (void);
	int 			getRawBits (void) const;
	void			setRawBits (const int);
	float			toFloat (void) const;
	int 			toInt (void) const;
};

std::ostream	&operator<<(std::ostream &, const Fixed &);
#endif //CPP_MODULE_02_FIXED_HPP
