#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	static const int fbits = 8;

public:
	Fixed();
	Fixed(const Fixed &old);
	Fixed(int const integer);
	Fixed(float const float_num);
	~Fixed();
	Fixed &operator=(const Fixed &operand);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream& stream, const Fixed &operand);

#endif
