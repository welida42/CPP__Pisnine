#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	//Fixed::operator=(old);
	*this = old;
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = integer << this->fbits;
//	std::cout << value << std::endl;
}

Fixed::Fixed(float const float_num)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(float_num * (1 << this->fbits));
//	std::cout << value << std::endl;
}

Fixed &Fixed::operator=(const Fixed &operand)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = operand.value;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt(void) const
{
//	std::cout << "t0Int " << value << std::endl;
	return (this->value >> this->fbits);
}

float Fixed::toFloat(void) const
{
//	std::cout << "t0Float" << std::endl;
	return ((float)(this->value) / (1 << this->fbits));
}

std::ostream &operator<< (std::ostream& os, const Fixed &operand)
{
	os << operand.toFloat();
	return os;
}