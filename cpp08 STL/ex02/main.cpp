# include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout <<  "size=" << s.size() << std::endl;
	std::cout << "-----list--------" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "------------------" << std::endl;
	std::cout << "is empty: " << mstack.empty() << std::endl;
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(777);
	mstack.push(778);
	mstack.push(779);
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "size: " << mstack.size() << std::endl;
	it = mstack.begin();
	while (it != ite)
	{
		mstack.pop();
		++it;
	}
	std::cout << "size: " << mstack.size() << std::endl;
	std::cout << "is empty: " << mstack.empty() << std::endl;
	std::cout << "------------------" << std::endl;
	return 0;
}
