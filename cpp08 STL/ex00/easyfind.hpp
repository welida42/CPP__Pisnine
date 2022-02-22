#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <exception>

class Exception: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Exception: number not found");
	}
};

template <typename T>
int easyfind(T & container, int num)
{
		typename T ::iterator it;
		it = std::find(container.begin(), container.end(), num);
		if (it == container.end())
			throw Exception();
		return *it;
}

#endif
