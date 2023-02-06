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
	Fixed (void);
	Fixed (const Fixed &);
	Fixed (const int);
	Fixed (const float);
	Fixed			&operator= (const Fixed &);
	~Fixed (void);
	int				getRawBits (void);
	int 			getRawBits (void) const;
	void			setRawBits (const int);
	float			toFloat (void) const;
	int 			toInt (void) const;
};

std::ostream	&operator<<(std::ostream &, const Fixed &);
#endif //CPP_MODULE_02_FIXED_HPP
