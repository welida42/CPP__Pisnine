#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int value;
	static const int fbits = 8;

public:
	Fixed();
	Fixed(const Fixed &old);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator=(const Fixed &operand);
};

#endif
