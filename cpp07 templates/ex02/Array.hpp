#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{
private:
	T *data;
	unsigned int len;

public:
	Array() : len(0)
	{
		data = new T[0];
	}
	Array(unsigned int n) : len(n)
	{
		data = new T[len]();
	}
	~Array()
	{
		delete[] data;
		data = nullptr;
		len = 0;
	}
	Array(const Array<T> &copy) : len(copy.len)
	{
		data = new T[len];
		for (unsigned int i = 0; i < len; i++)
			data[i] = copy[i];
	}

	Array<T> &operator=(const Array<T> &operand)
	{
		if (this == &operand)
			return *this;
		if (len > 0)
			delete [] this->data;
		len = operand.len;
		data = new T[len];
		for (unsigned int i = 0; i < len; i++)
			data[i] = operand[i];
		return *this;
	}

	class IndexOfArrayException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "IndexOfArrayException: this element is out of the limits";
		}
	};

	T& operator[](unsigned  int index)
	{
		if (index >= len)
			throw Array::IndexOfArrayException();
		else
			return data[index];
	}

	const T& operator[](unsigned  int index) const
	{
		if (index >= len)
			throw Array::IndexOfArrayException();
		else
			return data[index];
	}

	unsigned int size() const
	{
		return len;
	}

};

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


