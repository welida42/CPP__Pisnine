#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template< class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack& copy) : std::stack<T>(copy) { }
	~MutantStack() {}
	MutantStack& operator=(const MutantStack& operand)
	{
		*this = operand;
		return *this;
	}

	typedef typename Container::iterator iterator;

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif
