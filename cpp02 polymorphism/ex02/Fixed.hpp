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

	Fixed operator+(const Fixed &operand);
	Fixed operator-(const Fixed &operand);
	Fixed operator*(const Fixed &operand);
	Fixed operator/(const Fixed &operand);
	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);

	bool operator>(const Fixed &operand) const;
	bool operator<(const Fixed &operand) const;
	bool operator>=(const Fixed &operand) const;
	bool operator<=(const Fixed &operand) const;
	bool operator==(const Fixed &operand) const;
	bool operator!=(const Fixed &operand) const;

	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed &max(const Fixed &a, const Fixed &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<< (std::ostream& stream, const Fixed &operand);

#endif
