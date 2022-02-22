#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <exception>

class Span
{
private:
	std::vector<int> my_vector;
	unsigned int N;
	Span();
public:
	Span(unsigned int size);
	~Span();
	Span(const Span &copy);
	Span &operator=(const Span &operand);

	void addNumber(int number);
	void addRange(int begin, int end);
	int shortestSpan();
	int longestSpan();
	class FullStorageException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("FullStorageException: adding number to full storage");
		}
	};
	class NoSpanToFindException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("NoSpanToFindException: need more then one number");
		}
	};
};



#endif
