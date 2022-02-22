
SRCS = main.cpp ClassAMateria.cpp ClassCharacter.cpp ClassCure.cpp ClassIce.cpp ClassMateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = materia

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