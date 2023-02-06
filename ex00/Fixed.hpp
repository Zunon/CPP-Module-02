//
// Created by zunon on 2/6/23.
//

#ifndef CPP_MODULE_02_FIXED_HPP
#define CPP_MODULE_02_FIXED_HPP
#include <iostream>

class Fixed
{
	int					value;
	static const int	FRACTIONAL_BITS = 8;
	public:
		Fixed (void);
		Fixed (const Fixed &);
		Fixed			&operator= (const Fixed &);
		~Fixed (void);
		int				getRawBits (void);
		void			setRawBits (const int);
};


#endif //CPP_MODULE_02_FIXED_HPP
