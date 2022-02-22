
SRCS = main.cpp Karen.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Karen

CFLAGS = -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

.cpp.o:
			clang++ $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			clang++ $(OBJS) $(CFLAGS) -o $(NAME)

clean:
			rm -f $(OBJS)


fclean:		clean
			rm -f $(NAME)

re: fclean all