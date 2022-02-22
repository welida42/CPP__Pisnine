
#include "Karen.hpp"

typedef void(Karen::* funcs_names) (void);

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
				 "just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. "
				 "You don’t put enough! If you did I would not have to ask "
				 "for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been"
				 " coming here for years and you just started working here "
				 "last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	funcs_names funcs[4] = {&Karen::debug, &Karen::info, &Karen::warning,
							&Karen::error};
	int res = -1;
	for (int i = 0; i < 4; i++)
	{
		res = (!levels[i].compare(level)) ? i : -1;
		(res >= 0 && res <= 3) ? (i = 4) : (i += 0);
	}
	(this->*funcs[res])();
}
