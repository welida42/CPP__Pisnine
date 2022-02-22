#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &operand);
	std::string *getIdeas();
	void setIdeas(std::string idea);
};
#endif
