#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T* array, int length, void (*f)(T const &))
{
	if (array)
		for (int i = 0; i < length; i++)
			(*f)(array[i]);
}

template <typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
}

class Awesome
{
private:
	int _n;
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const {return this->_n;}
};

std::ostream& operator<<(std::ostream& os, const Awesome& operand)
{
	os << operand.get();
	return os;
}

#endif
