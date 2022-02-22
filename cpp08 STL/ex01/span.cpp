# include "span.hpp"

Span::Span(unsigned int size) : N(size) {};

Span::~Span() {};

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &operand)
{
	my_vector = operand.my_vector;
	N = operand.N;
	return *this;
}

void Span::addNumber(int number)
{
	if (my_vector.size() >= N)
		throw FullStorageException();
	my_vector.push_back(number);
}

void Span::addRange(int begin, int end)
{
	if (static_cast<int> (N - my_vector.size()) <= (end - begin))
		throw FullStorageException();
	std::vector<int> new_vector;
	for (int i = begin; i <= end; i++)
		new_vector.push_back(i);
	my_vector.insert(my_vector.end(), new_vector.begin(), new_vector.end());
}

int Span::shortestSpan()
{
	if (my_vector.size() < 2)
		throw NoSpanToFindException();
	std::vector<int> sorted = my_vector;
	std::sort(sorted.begin(), sorted.end());
	std::vector<int>::iterator it = sorted.begin();
	int min = (*(it+1) - *it);
	while (it != sorted.end() - 1)
	{
		if ((*(it+1) - *it) < min)
			min = (*(it+1) - *it);
		it++;
	}
	return min;
}

int Span::longestSpan()
{
	if (my_vector.size() < 2)
		throw NoSpanToFindException();
	std::vector<int>::iterator max = std::max_element(my_vector.begin(), my_vector.end());
	std::vector<int>::iterator min = std::min_element(my_vector.begin(),my_vector.end());
	return (*max - *min);
}