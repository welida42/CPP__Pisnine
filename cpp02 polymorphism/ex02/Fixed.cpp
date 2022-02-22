#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::Fixed(int const integer)
{
//	std::cout << "Int constructor called" << std::endl;
	this->value = integer << this->fbits;
}

Fixed::Fixed(float const float_num)
{
//	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_num * (1 << this->fbits));
}

Fixed &Fixed::operator=(const Fixed &operand)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->value = operand.value;
	return *this;
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt(void) const
{
	return (this->value >> this->fbits);
}

float Fixed::toFloat(void) const
{
	return ((float)(this->value) / (1 << this->fbits));
}

std::ostream &operator<< (std::ostream& os, const Fixed &operand)
{
	os << operand.toFloat();
	return os;
}

Fixed Fixed::operator+(const Fixed &operand)
{
	Fixed sum;
	sum.setRawBits(this->value + operand.getRawBits());
	return (sum);
}

Fixed Fixed::operator-(const Fixed &operand)
{
	Fixed sub;
	sub.setRawBits(this->value - operand.getRawBits());
	return (sub);
}

Fixed Fixed::operator*(const Fixed &operand)
{
	Fixed mult;
	mult.setRawBits((this->value * operand.getRawBits()) >> this->fbits);
	return (mult);
}

Fixed Fixed::operator/(const Fixed &operand)
{
	Fixed div;
	div.setRawBits((this->value << this->fbits) / operand.getRawBits());
	return (div);
}

Fixed & Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value++;
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value--;
	return (tmp);
}

bool Fixed::operator==(const Fixed &operand) const
{
	return (this->value == operand.getRawBits());
}
bool Fixed::operator!=(const Fixed &operand) const
{
	return !(*this == operand);
}
bool Fixed::operator>(const Fixed &operand) const
{
	return (this->value > operand.getRawBits());
}
bool Fixed::operator<(const Fixed &operand) const
{
	return (this->value < operand.getRawBits());
}
bool Fixed::operator>=(const Fixed &operand) const
{
	return (this->value >= operand.getRawBits());
}
bool Fixed::operator<=(const Fixed &operand) const
{
	return (this->value <= operand.getRawBits());
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}
const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}
Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

