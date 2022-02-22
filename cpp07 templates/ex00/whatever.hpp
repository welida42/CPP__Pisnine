#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

class Awesome {
private:
	int _n;
public:
	Awesome(int n) : _n(n){};
	bool operator==(Awesome const & rhs) const {return (this->_n == rhs._n); }
	bool operator!=(Awesome const & rhs) const {return (this->_n != rhs._n); }
	bool operator>(Awesome const & rhs) const {return (this->_n > rhs._n); }
	bool operator<(Awesome const & rhs) const {return (this->_n < rhs._n); }
	bool operator>=(Awesome const & rhs) const {return (this->_n >= rhs._n); }
	bool operator<=(Awesome const & rhs) const {return (this->_n <= rhs._n); }
	int getNum() const {return this->_n; }
};

std::ostream& operator<<(std::ostream& os, const Awesome& operand)
{
	os << operand.getNum();
	return os;
}

template<typename T>
T	max(T & x, T & y)
{
	return (x > y ? x : y);
}

template<typename T>
T	min(T & x, T & y)
{
	return (x < y ? x : y);
}

template<typename T>
void swap(T & x, T & y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

#endif
